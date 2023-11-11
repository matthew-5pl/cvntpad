#include "cvntled.h"

void cvntled_new(CvntLed* led,
	unsigned int com_pin, unsigned int red_pin,
	unsigned int green_pin, unsigned int blue_pin,
	RGBLedType led_type)
{
	led = malloc(sizeof(CvntLed));
	led->comPin = com_pin;
	led->redPin = red_pin;
	led->greenPin = green_pin;
	led->bluePin = blue_pin;
	led->type = led_type;

	// Turn led on
	writePin(led->comPin, (led->type == COM_ANODE) ? 1 : 0);
}

void cvntled_set(CvntLed* led, bool r, bool g, bool b) {
	writePin(led->redPin, (int)r);
	writePin(led->greenPin, (int)g);
	writePin(led->bluePin, (int)b);
}

void cvntled_toggle(CvntLed* led) {
	int comPinValue = readPin(led->comPin);
	writePin(led->comPin, !comPinValue);
}
