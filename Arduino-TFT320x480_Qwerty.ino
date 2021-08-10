// ** TFT Config **
#include <MCUFRIEND_kbv.h>
// #include "Adafruit_GFX.h"// Hardware-specific library
//int keybordLayout[50][7]={{0, 0, 0, 40, 40, 49, 33}, {1, 40, 0, 40, 40, 50, 64}, {2, 80, 0, 40, 40, 51, 35}, {3, 120, 0, 40, 40, 52, 36}, {4, 160, 0, 40, 40, 53, 37}, {5, 200, 0, 40, 40, 54, 94}, {6, 240, 0, 40, 40, 55, 38}, {7, 280, 0, 40, 40, 56, 42}, {8, 320, 0, 40, 40, 57, 40}, {9, 360, 0, 40, 40, 48, 41}, {10, 400, 0, 40, 40, 45, 95}, {11, 440, 0, 40, 40, 61, 43}, {12, 0, 40, 40, 40, 113, 81}, {13, 40, 40, 40, 40, 119, 87}, {14, 80, 40, 40, 40, 101, 69}, {15, 120, 40, 40, 40, 114, 82}, {16, 160, 40, 40, 40, 116, 84}, {17, 200, 40, 40, 40, 121, 89}, {18, 240, 40, 40, 40, 117, 85}, {19, 280, 40, 40, 40, 105, 73}, {20, 320, 40, 40, 40, 111, 79}, {21, 360, 40, 40, 40, 112, 80}, {22, 400, 40, 40, 40, 91, 123}, {23, 440, 40, 40, 40, 93, 125}, {24, 20, 80, 40, 40, 97, 65}, {25, 60, 80, 40, 40, 115, 83}, {26, 100, 80, 40, 40, 100, 68}, {27, 140, 80, 40, 40, 102, 70}, {28, 180, 80, 40, 40, 103, 71}, {29, 220, 80, 40, 40, 104, 72}, {30, 260, 80, 40, 40, 106, 74}, {31, 300, 80, 40, 40, 107, 75}, {32, 340, 80, 40, 40, 108, 76}, {33, 380, 80, 40, 40, 59, 58}, {34, 420, 80, 40, 40, 39, 34}, {35, 40, 120, 40, 40, 122, 90}, {36, 80, 120, 40, 40, 120, 88}, {37, 120, 120, 40, 40, 99, 67}, {38, 160, 120, 40, 40, 118, 86}, {39, 200, 120, 40, 40, 98, 66}, {40, 240, 120, 40, 40, 110, 78}, {41, 280, 120, 40, 40, 109, 77}, {42, 320, 120, 40, 40, 44, 60}, {43, 360, 120, 40, 40, 46, 62}, {44, 400, 120, 40, 40, 47, 63}  , {45, 0, 160, 80, 40, 0, 0}, {46, 80, 160, 240, 40, 0, 0} , {47, 320, 160, 80, 40, 0, 0}, {48, 400, 160, 80, 40, 0, 0}};
int keybordLayout[50][7]={{0, 0, 120, 40, 40, 49, 33}, {1, 40, 120, 40, 40, 50, 64}, {2, 80, 120, 40, 40, 51, 35}, {3, 120, 120, 40, 40, 52, 36}, {4, 160, 120, 40, 40, 53, 37}, {5, 200, 120, 40, 40, 54, 94}, {6, 240, 120, 40, 40, 55, 38}, {7, 280, 120, 40, 40, 56, 42}, {8, 320, 120, 40, 40, 57, 40}, {9, 360, 120, 40, 40, 48, 41}, {10, 400, 120, 40, 40, 45, 95}, {11, 440, 120, 40, 40, 61, 43}, {12, 0, 160, 40, 40, 113, 81}, {13, 40, 160, 40, 40, 119, 87}, {14, 80, 160, 40, 40, 101, 69}, {15, 120, 160, 40, 40, 114, 82}, {16, 160, 160, 40, 40, 116, 84}, {17, 200, 160, 40, 40, 121, 89}, {18, 240, 160, 40, 40, 117, 85}, {19, 280, 160, 40, 40, 105, 73}, {20, 320, 160, 40, 40, 111, 79}, {21, 360, 160, 40, 40, 112, 80}, {22, 400, 160, 40, 40, 91, 123}, {23, 440, 160, 40, 40, 93, 125}, {24, 20, 200, 40, 40, 97, 65}, {25, 60, 200, 40, 40, 115, 83}, {26, 100, 200, 40, 40, 100, 68}, {27, 140, 200, 40, 40, 102, 70}, {28, 180, 200, 40, 40, 103, 71}, {29, 220, 200, 40, 40, 104, 72}, {30, 260, 200, 40, 40, 106, 74}, {31, 300, 200, 40, 40, 107, 75}, {32, 340, 200, 40, 40, 108, 76}, {33, 380, 200, 40, 40, 59, 58}, {34, 420, 200, 40, 40, 39, 34}, {35, 40, 240, 40, 40, 122, 90}, {36, 80, 240, 40, 40, 120, 88}, {37, 120, 240, 40, 40, 99, 67}, {38, 160, 240, 40, 40, 118, 86}, {39, 200, 240, 40, 40, 98, 66}, {40, 240, 240, 40, 40, 110, 78}, {41, 280, 240, 40, 40, 109, 77}, {42, 320, 240, 40, 40, 44, 60}, {43, 360, 240, 40, 40, 46, 62}, {44, 400, 240, 40, 40, 47, 63}, {45, 0, 280, 80, 40, 0, 0}, {46, 80, 280, 320, 40, 0, 0} , {47, 400, 280, 80, 40, 0, 0}, {48, 0, 40, 80, 40, 0, 0}, {49, 400, 40, 80, 40, 0, 0}};

MCUFRIEND_kbv tft;
#define LCD_CS A3 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0
#define LCD_RESET A4 // Can alternately just connect to Arduino's reset pin
// Data D2-D9

// ** microSD Config **
// microSD D10-D13.

// ** Touchscreen Config **
#include <TouchScreen.h>
const int XP = 7, XM = A1, YP = A2, YM = 6; //ID=0x6814 Touchscreen pins
const int TS_LEFT=136,TS_RT=907,TS_TOP=139,TS_BOT=942; // Touchscreen default values
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
TSPoint tp;
#define MINPRESSURE 200
#define MAXPRESSURE 1000

// Assign human-readable names to some common 16-bit color values:
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define GRAY   0x9492
#define DARK_GRAY   0x73AE

int buttonWidth = 40;
int buttonHeight = 40;
bool keyboardShift=false;
String chartName;
void setup() {
  uint16_t ID = tft.readID(); //
  tft.begin(ID);
  tft.fillScreen(BLACK);
  tft.setRotation(1);
  showKeyboard();
}
void showKeyboard(){
  keyboardShift=false;
  tft.fillRoundRect(0, 120, 480, 200, 6, GRAY);
  int n, key;
  for (n=0;n<50;n++){
    showButton(keybordLayout[n][1], keybordLayout[n][2], keybordLayout[n][3], keybordLayout[n][4],false, char(keybordLayout[n][5]));
  }
  tft.setTextColor(BLUE);
  tft.setTextSize(2);
  tft.setCursor(10, 293);
  tft.print("Shift");
  tft.setCursor(410, 293);
  tft.print("Back");
  tft.setCursor(200, 293);
  tft.print("Space");
  tft.setCursor(10, 53);
  tft.print("Esc");
  tft.setCursor(410, 53);
  tft.print("Save");
  tft.drawRoundRect(81, 41, 318, 39, 6, DARK_GRAY);
  tft.drawRoundRect(82, 42, 317, 38, 6, GRAY);
}


void loop() {
  // put your main code here, to run repeatedly:
  readTouchScreen();
}
void readTouchScreen() {
  uint16_t xpos, ypos; //screen coordinates
  int n;  
  tp = ts.getPoint();   //tp.x, tp.y are ADC values
  pinMode(XM, OUTPUT);
  pinMode(YP, OUTPUT);
  if (tp.z > MINPRESSURE && tp.z < MAXPRESSURE) {
    xpos = map(tp.y, TS_TOP, TS_BOT, 0, tft.width());
    ypos = map(tp.x, TS_RT, TS_LEFT, 0, tft.height());

  for (n=0;n<50;n++){
    if (xpos>keybordLayout[n][1] and ypos>keybordLayout[n][2] and xpos<keybordLayout[n][1]+keybordLayout[n][3] and ypos<keybordLayout[n][2]+keybordLayout[n][4]){
      if(keybordLayout[n][0]<45){
        if (keyboardShift==false){chartName=chartName+char(keybordLayout[n][5]);}
        else {chartName=chartName+char(keybordLayout[n][6]);}
      }
      if(keybordLayout[n][0]==45){
        if (keyboardShift==false){keyboardShift=true;}
        else {keyboardShift=false;}

      }
      if(keybordLayout[n][0]==46){
        chartName=chartName+" ";
      }
      if(keybordLayout[n][0]==47){
        chartName=chartName.substring(0, chartName.length()-1);
      }

      
    }
  }
  tft.fillRoundRect(82, 42, 317, 37, 6, BLACK);
  tft.setTextColor(BLUE);
  tft.setTextSize(3);
  tft.setCursor(90, 50);
  tft.print(chartName);
  delay(200); 
  }
}




void showButton(int fx, int fy, int tx, int ty, bool selected, char buttonLabel){
  uint16_t buttonColor=DARK_GRAY;
  if (selected == true) buttonColor=WHITE;
  tft.fillRoundRect(fx+1, fy+1, tx-2, ty-2, 6, buttonColor);
  tft.drawRoundRect(fx+1, fy+1, tx-2, ty-2, 6, DARK_GRAY);
  tft.setCursor(fx+10, fy+13);
  tft.setTextColor(BLUE);
  tft.setTextSize(3);
  tft.print(buttonLabel);
}
