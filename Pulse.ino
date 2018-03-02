// Akira DeMoss 
// Light-up Tie Project

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

// pin on Flora that is connected
#define PIN            6

// How many NeoPixels are attached to the Flora Board
#define NUMPIXELS      16

// Setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// delay for half a second
int delayval = 50; 

void setup() {
  // This initializes the NeoPixel library.
  pixels.begin(); 
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

/************************Start moderately green color*****************************************/
    // pin 0
    pixels.setPixelColor(0, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.

    // pin 1
    pixels.setPixelColor(1, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    // pin 2
    pixels.setPixelColor(2, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    
    // pin 3
    pixels.setPixelColor(3, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
        // pin 4
    pixels.setPixelColor(4, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    
    // pin 5
    pixels.setPixelColor(5, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    
    // pin 6
    pixels.setPixelColor(6, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
        
		// pin 7      
    pixels.setPixelColor(7, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    
    // pin 8
    pixels.setPixelColor(8, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    
    // pin 9
    pixels.setPixelColor(9, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    // pin 10
    pixels.setPixelColor(10, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    
    // pin 11
    pixels.setPixelColor(11, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    
    // pin 12
    pixels.setPixelColor(12, pixels.Color(0,150,0)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    


/************************Start green blue color*****************************************/
    // pin 12
    pixels.setPixelColor(12, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
    // pin 11
    pixels.setPixelColor(11, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 10
    pixels.setPixelColor(10, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 9
    pixels.setPixelColor(9, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
    // pin 8
    pixels.setPixelColor(8, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 7
    pixels.setPixelColor(7, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 6
    pixels.setPixelColor(6, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 5
    pixels.setPixelColor(5, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 4
    pixels.setPixelColor(4, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 3
    pixels.setPixelColor(3, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 2
    pixels.setPixelColor(2, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 1
    pixels.setPixelColor(1, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 0
    pixels.setPixelColor(0, pixels.Color(0,150,50)); // Green blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	
	
/************************Start moderately aqua color*****************************************/
    // pin 0
    pixels.setPixelColor(0, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.  
	
	// pin 1
    pixels.setPixelColor(1, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 2
    pixels.setPixelColor(2, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 3
    pixels.setPixelColor(3, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 4
    pixels.setPixelColor(4, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 5
    pixels.setPixelColor(5, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 6
    pixels.setPixelColor(6, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 7
    pixels.setPixelColor(7, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 8
    pixels.setPixelColor(8, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 9
    pixels.setPixelColor(9, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 10
    pixels.setPixelColor(10, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 11
    pixels.setPixelColor(11, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 12
    pixels.setPixelColor(12, pixels.Color(0,150,100)); // Moderately aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.

	
	
/************************Start dark aqua color*****************************************/        
    // pin 12
    pixels.setPixelColor(12, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.   
	
	// pin 11
    pixels.setPixelColor(11, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 10
    pixels.setPixelColor(10, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 9
    pixels.setPixelColor(9, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 8
    pixels.setPixelColor(8, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 7
    pixels.setPixelColor(7, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 6
    pixels.setPixelColor(6, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 5
    pixels.setPixelColor(5, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 4
    pixels.setPixelColor(4, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 3
    pixels.setPixelColor(3, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 2
    pixels.setPixelColor(2, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 1
    pixels.setPixelColor(1, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 0
    pixels.setPixelColor(0, pixels.Color(0,150,150)); // Start dark aqua color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	

/************************Start medium blue color*****************************************/
	//pin 0
    pixels.setPixelColor(0, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 

	//pin 1
    pixels.setPixelColor(1, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 

	//pin 2
    pixels.setPixelColor(2, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 	
	
	//pin 3
    pixels.setPixelColor(3, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 	
	
	//pin 4
    pixels.setPixelColor(4, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds).

	//pin 5
    pixels.setPixelColor(5, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 

	//pin 6
    pixels.setPixelColor(6, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 
	
	//pin 7
    pixels.setPixelColor(7, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 
	
	//pin 8
    pixels.setPixelColor(8, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 
	
	//pin 9
    pixels.setPixelColor(9, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 
	
	//pin 10
    pixels.setPixelColor(10, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 
	
	//pin 11
    pixels.setPixelColor(11, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 
	
	//pin 12
    pixels.setPixelColor(12, pixels.Color(0,100,150)); // Medium blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds). 
	
	
	
/************************Start darker blue color*****************************************/  
    // pin 12
    pixels.setPixelColor(12, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
    
	// pin 11
    pixels.setPixelColor(11, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 10
    pixels.setPixelColor(10, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 9
    pixels.setPixelColor(9, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 8
    pixels.setPixelColor(8, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 7
    pixels.setPixelColor(7, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 6
    pixels.setPixelColor(6, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 5
    pixels.setPixelColor(5, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 4
    pixels.setPixelColor(4, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 3
    pixels.setPixelColor(3, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 2
    pixels.setPixelColor(2, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 1
    pixels.setPixelColor(1, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
	// pin 0
    pixels.setPixelColor(0, pixels.Color(0,50,150)); // Darker blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time.
	
}
