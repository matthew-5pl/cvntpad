# cvntpad 🍋
<img alt="cvntpad logo: a dark gray keyboard with white keys and a pair of lime green lips in the background" src="logo.svg" width=250 height=250>

it's my first attempt at cad modelling and writing qmk keymaps, so expect it to be very rough around the edges

# the case (wip!)
i made the case using tinkercad, it's very basic and also kinda bad but it's my first cad model so i'm happy with it for now

case `.stl` files are in the `/case` folder, i use cura to print them using the `Fine - (0.1mm)` profile.

# firmware
since i haven't written a shell script to automate builds yet you're gonna need to:
- clone qmk here
- copy the `/qmk/cvntpad` folder to the cloned qmk `keyboards` folder 
- compile (`qmk compile -kb cvntpad -km default`)

if you need help with other parts of the qmk build process please refer to the [official guide](https://docs.qmk.fm/#/newbs). 

# credits
- [qmk firmware](https://github.com/qmk/qmk_firmware)
- [twemoji (edited and used in the logo)](https://twemoji.twitter.com/)