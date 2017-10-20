# colourObject
Dynamic Color Generator
Designed for fast, low memory footrprint, dynamic color generation

The idea behind this came about because I wanted a simple way to dynamicly get a colour palete from 2 RGB colours.

The whole spectrum can be derived using the 6 base eprimary colours
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

Example of Advanced dynamic colour pallets using the default primary colours
```c
//Include the class
#include "colourObject.h"
//Create your array of RGB values in the order you wish them to blend
char colourList[18]={255,0,0,255,255,0,0,255,0,0,255,255,0,0,255,255,0,255};
//Create an instance of colourObject with a maximum brightenss value of 255 per colour per pixel, the number of colours youare inserting(6) and a char array of values in the order R1G1B1,R2G2B2....
colourObject cObject(255, 6, colourList);
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
- Inserting BLACK and WHITE into the spectrum can be achieved after item 1 is completed
