#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/mmocoin.ico

convert ../../src/qt/res/icons/mmocoin-16.png ../../src/qt/res/icons/mmocoin-32.png ../../src/qt/res/icons/mmocoin-48.png ${ICON_DST}
