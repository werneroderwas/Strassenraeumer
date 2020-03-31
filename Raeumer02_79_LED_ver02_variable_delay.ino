// NeoPixelTest
// This example will cycle between showing four pixels as Red, Green, Blue, White
// and then showing those pixels as Black.
//
// Included but commented out are examples of configuring a NeoPixelBus for
// different color order including an extra white channel, different data speeds, and
// for Esp8266 different methods to send the data.
// NOTE: You will need to make sure to pick the one for your platform 
//
//
// There is serial output of the current state so you can confirm and follow along
//

#include <NeoPixelBus.h>

const uint16_t PixelCount = 79; // this example assumes 4 pixels, making it smaller will cause a failure
const uint8_t PixelPin = 12;  // make sure to set this to the correct pin, ignored for Esp8266
const uint8_t dely = 18; // delay in milliseconds

#define colorSaturation 128

// three element pixels, in different order and speeds
NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, Neo400KbpsMethod> strip(PixelCount, PixelPin);

// For Esp8266, the Pin is omitted and it uses GPIO3 due to DMA hardware use.  
// There are other Esp8266 alternative methods that provide more pin options, but also have
// other side effects.
// for details see wiki linked here https://github.com/Makuna/NeoPixelBus/wiki/ESP8266-NeoMethods 

// You can also use one of these for Esp8266, 
// each having their own restrictions
//
// These two are the same as above as the DMA method is the default
// NOTE: These will ignore the PIN and use GPI03 pin
//NeoPixelBus<NeoGrbFeature, NeoEsp8266Dma800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, NeoEsp8266Dma400KbpsMethod> strip(PixelCount, PixelPin);

// Uart method is good for the Esp-01 or other pin restricted modules
// for details see wiki linked here https://github.com/Makuna/NeoPixelBus/wiki/ESP8266-NeoMethods 
// NOTE: These will ignore the PIN and use GPI02 pin
//NeoPixelBus<NeoGrbFeature, NeoEsp8266Uart1800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, NeoEsp8266Uart1400KbpsMethod> strip(PixelCount, PixelPin);

// The bitbang method is really only good if you are not using WiFi features of the ESP
// It works with all but pin 16
//NeoPixelBus<NeoGrbFeature, NeoEsp8266BitBang800KbpsMethod> strip(PixelCount, PixelPin);
//NeoPixelBus<NeoRgbFeature, NeoEsp8266BitBang400KbpsMethod> strip(PixelCount, PixelPin);

// four element pixels, RGBW
//NeoPixelBus<NeoRgbwFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

RgbColor red(colorSaturation, 0, 0);
RgbColor green(0, colorSaturation, 0);
RgbColor blue(0, 0, colorSaturation);
RgbColor white(colorSaturation);
RgbColor black(0);

HslColor hslRed(red);
HslColor hslGreen(green);
HslColor hslBlue(blue);
HslColor hslWhite(white);
HslColor hslBlack(black);


void setup()
{
    Serial.begin(115200);
    while (!Serial); // wait for serial attach

    Serial.println();
    Serial.println("Initializing...");
    Serial.flush();

    // this resets all the neopixels to an off state
    strip.Begin();
    strip.Show();


    Serial.println();
    Serial.println("Running...");
}


void loop()
{
    // delay(5000);

    // Serial.println("Colors R, G, B, W...");

    // set the colors, 
    // if they don't match in order, you need to use NeoGrbFeature feature


      strip.SetPixelColor(0, blue);
      strip.SetPixelColor(1, blue);
      strip.SetPixelColor(2, blue);
      strip.SetPixelColor(3, blue);
      strip.SetPixelColor(4, black);
      strip.SetPixelColor(19, blue);
      strip.SetPixelColor(20, blue);
      strip.SetPixelColor(21, blue);
      strip.SetPixelColor(22, blue);
      strip.SetPixelColor(23, blue);
      strip.SetPixelColor(24, black);
      strip.SetPixelColor(39, blue);
      strip.SetPixelColor(54, black);
      strip.SetPixelColor(55, blue);
      strip.SetPixelColor(56, blue);
      strip.SetPixelColor(57, blue);
      strip.SetPixelColor(58, blue);
      strip.SetPixelColor(59, blue);
      strip.SetPixelColor(74, black);
      strip.SetPixelColor(75, blue);
      strip.SetPixelColor(76, blue);
      strip.SetPixelColor(77, blue);
      strip.SetPixelColor(78, blue);
      strip.Show();
      delay (dely);

      // the following line is 43

      strip.SetPixelColor(3, black);
      strip.SetPixelColor(18, blue);
      strip.SetPixelColor(23, black);
      strip.SetPixelColor(38, blue);
      strip.SetPixelColor(40, blue);
      strip.SetPixelColor(55, black);
      strip.SetPixelColor(60, blue);
      strip.SetPixelColor(75, black);
      strip.Show();
      delay (dely);
            
      // the following line is 44
      
      strip.SetPixelColor(2, black);
      strip.SetPixelColor(17, blue);
      strip.SetPixelColor(22, black);
      strip.SetPixelColor(37, blue);
      strip.SetPixelColor(41, blue);
      strip.SetPixelColor(56, black);
      strip.SetPixelColor(61, blue);
      strip.SetPixelColor(76, black);
      strip.Show();
      delay (dely);

      // the following line is 45

      strip.SetPixelColor(1, black);
      strip.SetPixelColor(16, blue);
      strip.SetPixelColor(21, black);
      strip.SetPixelColor(36, blue);
      strip.SetPixelColor(42, blue);
      strip.SetPixelColor(57, black);
      strip.SetPixelColor(62, blue);
      strip.SetPixelColor(77, black);
      strip.Show();
      delay (dely);
      // the following line is 46
      
      strip.SetPixelColor(0, black);
      strip.SetPixelColor(15, blue);
      strip.SetPixelColor(20, black);
      strip.SetPixelColor(35, blue);
      strip.SetPixelColor(43, blue);
      strip.SetPixelColor(58, black);
      strip.SetPixelColor(63, blue);
      strip.SetPixelColor(78, black);
      strip.Show();
      delay (dely);

      // the following line is 47
      
      strip.SetPixelColor(14, blue);
      strip.SetPixelColor(19, black);
      strip.SetPixelColor(34, blue);
      strip.SetPixelColor(39, black);
      strip.SetPixelColor(44, blue);
      strip.SetPixelColor(59, black);
      strip.SetPixelColor(64, blue);
      
      strip.Show();
      delay (dely); 
           
      // the following line is 48
      
      strip.SetPixelColor(13, blue);
      strip.SetPixelColor(18, black);
      strip.SetPixelColor(33, blue);
      strip.SetPixelColor(38, black);
      strip.SetPixelColor(40, black);
      strip.SetPixelColor(45, blue);
      strip.SetPixelColor(60, black);
      strip.SetPixelColor(65, blue);
      
      strip.Show();
      delay (dely);         

      // the following line is 49
      
      strip.SetPixelColor(12, blue);
      strip.SetPixelColor(17, black);
      strip.SetPixelColor(32, blue);
      strip.SetPixelColor(37, black);
      strip.SetPixelColor(41, black);
      strip.SetPixelColor(46, blue);
      strip.SetPixelColor(61, black);
      strip.SetPixelColor(66, blue);
      
      strip.Show();
      delay (dely);     

      // the following line is 50
      
      strip.SetPixelColor(11, blue);
      strip.SetPixelColor(16, black);
      strip.SetPixelColor(31, blue);
      strip.SetPixelColor(36, black);
      strip.SetPixelColor(42, black);
      strip.SetPixelColor(47, blue);
      strip.SetPixelColor(62, black);
      strip.SetPixelColor(67, blue);
      
      strip.Show();
      delay (dely);  

      // the following line is 51
      
      strip.SetPixelColor(10, blue);
      strip.SetPixelColor(15, black);
      strip.SetPixelColor(30, blue);
      strip.SetPixelColor(35, black);
      strip.SetPixelColor(43, black);
      strip.SetPixelColor(48, blue);
      strip.SetPixelColor(63, black);
      strip.SetPixelColor(68, blue);
      
      strip.Show();
      delay (dely);  

      // the following line is 52
      
      strip.SetPixelColor(9, blue);
      strip.SetPixelColor(14, black);
      strip.SetPixelColor(29, blue);
      strip.SetPixelColor(34, black);
      strip.SetPixelColor(44, black);
      strip.SetPixelColor(49, blue);
      strip.SetPixelColor(64, black);
      strip.SetPixelColor(69, blue);
      
      strip.Show();
      delay (dely);  

      // the following line is 53
      
      strip.SetPixelColor(8, blue);
      strip.SetPixelColor(13, black);
      strip.SetPixelColor(28, blue);
      strip.SetPixelColor(33, black);
      strip.SetPixelColor(45, black);
      strip.SetPixelColor(50, blue);
      strip.SetPixelColor(65, black);
      strip.SetPixelColor(70, blue);
      
      strip.Show();
      delay (dely);  


      // the following line is 54
      
      strip.SetPixelColor(7, blue);
      strip.SetPixelColor(12, black);
      strip.SetPixelColor(27, blue);
      strip.SetPixelColor(32, black);
      strip.SetPixelColor(46, black);
      strip.SetPixelColor(51, blue);
      strip.SetPixelColor(66, black);
      strip.SetPixelColor(71, blue);
      
      strip.Show();
      delay (dely);  

      
      // the following line is 55
      
      strip.SetPixelColor(6, blue);
      strip.SetPixelColor(11, black);
      strip.SetPixelColor(26, blue);
      strip.SetPixelColor(31, black);
      strip.SetPixelColor(47, black);
      strip.SetPixelColor(52, blue);
      strip.SetPixelColor(67, black);
      strip.SetPixelColor(72, blue);
      
      strip.Show();
      delay (dely);  

      // the following line is 56
      
      strip.SetPixelColor(5, blue);
      strip.SetPixelColor(10, black);
      strip.SetPixelColor(25, blue);
      strip.SetPixelColor(30, black);
      strip.SetPixelColor(48, black);
      strip.SetPixelColor(53, blue);
      strip.SetPixelColor(68, black);
      strip.SetPixelColor(73, blue);
      
      strip.Show();
      delay (dely);  


      // the following line is 57
      
      strip.SetPixelColor(4, blue);
      strip.SetPixelColor(9, black);
      strip.SetPixelColor(24, blue);
      strip.SetPixelColor(29, black);
      strip.SetPixelColor(49, black);
      strip.SetPixelColor(54, blue);
      strip.SetPixelColor(69, black);
      strip.SetPixelColor(74, blue);
      
      strip.Show();
      delay (dely);  


      // the following line is 58
      
      strip.SetPixelColor(3, blue);
      strip.SetPixelColor(8, black);
      strip.SetPixelColor(23, blue);
      strip.SetPixelColor(28, black);
      strip.SetPixelColor(50, black);
      strip.SetPixelColor(55, blue);
      strip.SetPixelColor(70, black);
      strip.SetPixelColor(75, blue);
      
      strip.Show();
      delay (dely);  


      // the following line is 59
      
      strip.SetPixelColor(2, blue);
      strip.SetPixelColor(7, black);
      strip.SetPixelColor(22, blue);
      strip.SetPixelColor(27, black);
      strip.SetPixelColor(51, black);
      strip.SetPixelColor(56, blue);
      strip.SetPixelColor(71, black);
      strip.SetPixelColor(76, blue);
      
      strip.Show();
      delay (dely);  

      // the following line is 60
      
      strip.SetPixelColor(1, blue);
      strip.SetPixelColor(6, black);
      strip.SetPixelColor(21, blue);
      strip.SetPixelColor(26, black);
      strip.SetPixelColor(52, black);
      strip.SetPixelColor(57, blue);
      strip.SetPixelColor(72, black);
      strip.SetPixelColor(77, blue);
      
      strip.Show();
      delay (dely);  

      // the following line is 61
      
      strip.SetPixelColor(0, blue);
      strip.SetPixelColor(5, black);
      strip.SetPixelColor(20, blue);
      strip.SetPixelColor(25, black);
      strip.SetPixelColor(53, black);
      strip.SetPixelColor(58, blue);
      strip.SetPixelColor(73, black);
      strip.SetPixelColor(78, blue);
      
      strip.Show();
      delay (dely);  


}
