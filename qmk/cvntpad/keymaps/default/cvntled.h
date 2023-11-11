#include QMK_KEYBOARD_H

typedef enum RGBLedType {
	COM_ANODE,
	COM_CATHODE
} RGBLedType;

typedef struct CvntLed {
	// Common anode/cathode pin
	unsigned int comPin;
	// Red Pin
	unsigned int redPin;
	// Green Pin
	unsigned int greenPin;
	// Blue Pin
	unsigned int bluePin;
	// Led type (common anode/cathode)
	RGBLedType type;
} CvntLed;

// Create a new CvntLed "object"
void cvntled_new(CvntLed* led,
	unsigned int com_pin, unsigned int red_pin,
	unsigned int green_pin, unsigned int blue_pin,
	RGBLedType led_type);

// Set RGB LED Color
void cvntled_set(CvntLed* led, bool r, bool g, bool b);

// Toggle On/Off State
void cvntled_toggle(CvntLed* led);
