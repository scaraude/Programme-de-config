// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

/*#define BLEU pixels.Color(0,0,255)
#define ROUGE pixels.Color(255,0,0)
#define VERT pixels.Color(0,255,0)*/

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      144

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


int delayval = 500; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
  pixels.setBrightness(5);
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

  
    pixels.setPixelColor(1, pixels.Color(255,0,0)); // Moderately bright violet color.
    pixels.setPixelColor(5, pixels.Color(0,0,255));
    pixels.setPixelColor(9, pixels.Color(255,0,0));
    pixels.setPixelColor(11, pixels.Color(0,0,255));
    pixels.setPixelColor(15, pixels.Color(255,0,0));
    
    pixels.setPixelColor(19, pixels.Color(0,0,255));
    pixels.setPixelColor(22, pixels.Color(255,0,0));
    pixels.setPixelColor(25, pixels.Color(0,0,255));
    pixels.setPixelColor(29, pixels.Color(255,0,0));
    pixels.setPixelColor(32, pixels.Color(0,0,255));
    
    pixels.setPixelColor(34, pixels.Color(255,0,0));
    pixels.setPixelColor(38, pixels.Color(0,0,255));
    pixels.setPixelColor(42, pixels.Color(255,0,0));
    pixels.setPixelColor(46, pixels.Color(0,0,255));
    pixels.setPixelColor(48, pixels.Color(255,0,0));
    
    pixels.setPixelColor(52, pixels.Color(0,0,255));
    pixels.setPixelColor(56, pixels.Color(255,0,0));
    pixels.setPixelColor(58, pixels.Color(0,0,255));
    pixels.setPixelColor(62, pixels.Color(255,0,0));
    pixels.setPixelColor(66, pixels.Color(0,0,255));
    
    pixels.setPixelColor(69, pixels.Color(255,0,0));
    pixels.setPixelColor(71, pixels.Color(0,0,255));
    pixels.setPixelColor(75, pixels.Color(255,0,0));
    pixels.setPixelColor(79, pixels.Color(0,0,255));
    pixels.setPixelColor(81, pixels.Color(255,0,0));
    
    pixels.setPixelColor(85, pixels.Color(0,0,255));
    pixels.setPixelColor(89, pixels.Color(255,0,0));
    pixels.setPixelColor(93, pixels.Color(0,0,255));
    pixels.setPixelColor(95, pixels.Color(255,0,0));
    pixels.setPixelColor(98, pixels.Color(0,0,255));
    
    pixels.setPixelColor(102, pixels.Color(255,0,0));
    pixels.setPixelColor(105, pixels.Color(0,0,255));
    pixels.setPixelColor(108, pixels.Color(255,0,0));
    pixels.setPixelColor(112, pixels.Color(0,0,255));
    pixels.setPixelColor(116, pixels.Color(255,0,0));
    
    pixels.setPixelColor(119, pixels.Color(0,0,255));
        
    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).

  
}
