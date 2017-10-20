#include "colourObject.h"

char colourList[18]={64,0,0,64,64,0,0,64,0,0,64,64,0,0,64,64,0,64};
colourObject cObject(64), dynamicCObject(64, 6, colourList);
int colourIndex;
byte rgbColour[3];

void setup()
{
  

}

void loop()
{
  for(colourIndex=0; colourIndex<cObject._bandWidth; colourIndex++)
  {
    //Place the RGB colour at Index "colourIndex" into the 3 byte array "rgbColour"
    cObject.getColour(colourIndex, rgbColour);   
    dynamicCObject.getColour(colourIndex, rgbColour);
  }

}
