# piosic

![piosic](imgur.com image replace me!)

An ergonomic split ortholinear row-staggered keyboard :)

* Keyboard Maintainer: [maurogarciac](https://github.com/maurogarciac)
* Hardware Supported: tecladito PCB's or full schizo handwire, promicro/promicro_rp2040
* Hardware Availability: tecladito.com

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb tecladito/piosic -km {large/medium/small/etc}

    qmk compile -kb tecladito/piosic/32u4 -km {large/medium/small/etc}

Flashing example for this keyboard:

    qmk flash -kb tecladito/piosic -km {large/medium/small/etc}

    qmk flash -kb tecladito/piosic/32u4 -km {large/medium/small/etc}

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
