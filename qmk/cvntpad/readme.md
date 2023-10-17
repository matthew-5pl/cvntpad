# cvntpad

<img alt="cvntpad logo: a dark gray keyboard with white keys and a pair of lime green lips in the background" src="../../logo.svg" width=250 height=250>

for non qmk-template info please refer to the root `/README.md`, [here](../../README.md)

* Keyboard Maintainer: [Matteo Forlani](https://github.com/matthew-5pl)
* Hardware Supported: Waveshare RP2040-Zero
* Hardware Availability: basically any eCommerce site, i bought it on [amazon italy](https://www.amazon.it/dp/B09M42BS6H?psc=1&ref=ppx_yo2ov_dt_b_product_details).

Make example for this keyboard (after setting up your build environment):

    make cvntpad:default

Flashing example for this keyboard:

    make cvntpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader:

hold the BOOT button on the RP2040-Zero's PCB and press the RESET button. if done correctly the mcu should show up as a flash memory device on the computer its connected to. to flash the firmware just drag the `.uf2` binary in the root folder of the RP2040.