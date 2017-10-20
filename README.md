# colourObject
Dynamic Color Generator
Designed for fast, low memory footrprint, dynamic color generation

The idea behind this came about because I wanted a simple way to dynamicly get a colour palete from 2 RGB colours.

The whole spectrum can be derived using the 6 bas eprimary colours
![Primary Colours](https://github.com/leonyuhanov/colourObject/blob/master/media/primarycols.png)

By blending from each color to the next we can get the entire color spectrum(minus BLACK and WHITE but read on)
![Rainbow](https://github.com/leonyuhanov/colourObject/blob/master/media/spread1.png)

Map of internal class objects:
![Rainbow](https://github.com/leonyuhanov/colourObject/blob/master/media/description.png)

Example of default spectrum use:
```c
//Include the class
#include "colourObject.h"

//Create an instance of colourObject with a maximum brightenss value of 255 per colour per pixel
colourObject cObject(255);
//A counter to let us incerment thorugh the colours
int colourIndex;
//A local 3 byte array to hold the RGB value
byte rgbColour[3];
for(colourIndex=0; colourIndex<cObject._bandWidth; colourIndex++)
{
   //Place the RGB colour at Index "colourIndex" into the 3 byte array "rgbColour"
   cObject.getColour(colourIndex, rgbColour);    
}
```

What Im working on :
- Dynamic Primary colour insertion to get a spectrum from any colour you want
