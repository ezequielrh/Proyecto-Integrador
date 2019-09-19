/* HAL-only entry function */
#include "hal_data.h"

#define COUNTS_PER_MILLISECOND  (120E6 / 1000)

#define POT_CHANNEL 0
#define TEMP_CHANNEL 28
#define INTERNAL_VREF_CHANNEL 29

 // Variable to hold ADC Data
 uint16_t adcCounts;
 uint16_t temperatureCounts;
 uint16_t internalVRefCounts;
 float adcVoltage;
 float temperatureVoltage;
 float temperatureDegreesC;
 float temperatureDegreesF;
 float internalVRefVoltage;

void hal_entry(void)
{
    /* TODO: add your own code here */
    // Boolean to hold LED state
    bool isOn = true;

    // Variable to hold counts
    timer_size_t counts = 0;

    // Open the timer using the configured options from the configurator
    g_timer0.p_api->open(g_timer0.p_ctrl, g_timer0.p_cfg);


    // Open the ADC
    g_adc0.p_api->open(g_adc0.p_ctrl, g_adc0.p_cfg);

    // Configure Scan
     g_adc0.p_api->scanCfg(g_adc0.p_ctrl, g_adc0.p_channel_cfg);



    // Start ADC Scan
    g_adc0.p_api->scanStart(g_adc0.p_ctrl);

    // Main Loop
    while(1)
    {
        // Turn LED
        g_ioport.p_api->pinWrite(IOPORT_PORT_06_PIN_00,isOn);

        // Toggle LED State
        isOn = !isOn;

        // Read ADC
         g_adc0.p_api->read(g_adc0.p_ctrl, POT_CHANNEL, &adcCounts);
         g_adc0.p_api->read(g_adc0.p_ctrl, TEMP_CHANNEL, &temperatureCounts);
         g_adc0.p_api->read(g_adc0.p_ctrl, INTERNAL_VREF_CHANNEL, &internalVRefCounts);

        // Convert Counts to Voltage
         adcVoltage = ((adcCounts * 3.3f) / 4095.0f);
         temperatureVoltage = ((temperatureCounts * 3.3f) / 4095.0f);
         internalVRefVoltage = ((internalVRefCounts * 3.3f) / 4095.0f);

        // Convert Voltage to Degrees C and Degrees F
         temperatureDegreesC = (float)(((temperatureVoltage - 1.24f) / 0.0041f) + 25.0f);
         temperatureDegreesF = (float)(((temperatureDegreesC * 9.0f) / 5.0f) + 32.0f);

         /*
        // Wait for timer loop
        while (1)
        {
            // Get current counts
            g_timer0.p_api->counterGet(g_timer0.p_ctrl,counts);

            // Check if 500ms has elapsed => This should be a helper function at some point
            // Need to look if the PBCLK settings are stored in a define somewhere...
            if (counts > (500*COUNTS_PER_MILLISECOND))
            {
                // Reset the timer to 0
                g_timer0.p_api->reset(g_timer0.p_ctrl);
            }
        }*/
    }
}
