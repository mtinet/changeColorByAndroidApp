# changeColorByAndroidApp

## 안드로이드폰의 블루투스를 이용해 아두이노에 연결된 네오픽셀의 색을 제어하는 예제

### library  
- Adafruit_NeoPixel-master.zip - Adafruit사의 Neo Pixel라이브러리. 아두이노IDE 설치 폴더의 library폴더에 압축을 푼 다음 IDE를 재시작해야 함

### appinventor
- rgb_led_control_nano.aia - 앱인벤터 사이트에 임포트가 가능한 안드로이드 앱 프로그램  
- rgb_led_control_nano.apk - 안드로이드 스마트폰에 설치가 가능한 안드로이드앱, 폰에 복사해서 넣고 설치하면 됨  

![](https://github.com/mtinet/changeColorByAndroidApp/blob/master/appInventor/app(design).png?raw=true)  
![](https://github.com/mtinet/changeColorByAndroidApp/blob/master/appInventor/app(blocks).png?raw=true)  

### arduino
- 프로그램 업로드 시 블루투스 모듈(HC-06)을 제거하고 업로드 한 다음 연결할 것  
- 네오픽셀의 셀 갯수는 changeColorByAndroidApp.ino 파일의 14열에 있는 '#define NUMPIXELS      3'에 있는 숫자를 네오픽셀의 RGB LED의 갯수로 바꿔주면 됨.  
- changeNameOfHC-06.ino - 수업에 적용할 때는 모든 학생의 블루투스 모듈이 같은 이름을 가져 수업에 혼란을 가져오므로 각각의 블루투스 모듈 이름을 다시 지정해줄 때 사용(사용법은 [https://goo.gl/bRhkgR](https://goo.gl/bRhkgR) 참조)  

- changeColorByAndroidApp_CommonAnodeRGBLED.ino - CommonAnodeRGBLED를 사용할 때 사용  
- changeColorByAndroidApp_sk6812RGBW.ino - sk6812RGBW를 사용할 때 사용(White LED가 추가되어 있어 32비트 신호를 주어야 동작함)  
- changeColorByAndroidApp_ws2812RGB.ino - ws2812RGB를 사용할 때 사용


### schematic(fritzing)
- 일반 RGB LED를 사용하면 특정 핀을 항상 5V를 출력하게 하여 사용이 가능하지만, NeoPixel(HC-06포함)은 전력출력의 문제로 메인 전원 출력 단자를 이용해야 하므로 브레드 보드를 사용해야 함. 다만 납땜을 할 수 있고 아두이노 나노, 아두이노 프로미니 등의 소형 칩을 사용할 수 있는 환경이라면 브레드 보드를 제외하고 소형화가 가능함.
- commonAnodeRGBLED
- neo pixel(bar)
- neo pixel(jewel)

## 아두이노 우노와 CommonRGBLED, Bluetooth의 연결    
| 아두이노 우노  |   CommonRGBLED   | Bluetooth |
| :---------: | :----------: | :-------: |
|     5V      |              |    5V     |
|     GND     |              |    GND    |
|      6      | CommonAnode  |           |
|      9      |     red      |           |
|     10      |    green     |           |
|     11      |     blue     |           |
|    rx(0)    |              |    tx     |
|    tx(1)    |              |    rx     |  

![](https://github.com/mtinet/changeColorByAndroidApp/blob/master/schematic(fritzing)/commonAnodeRGBLED.png?raw=true)  

## 아두이노 우노와 NeoPixel, Bluetooth의 연결    
| 아두이노 우노  |   NeoPixel   | Bluetooth |
| :---------: | :----------: | :-------: |
|     5V      |     5V       |    5V     |
|     GND     |     GND      |    GND    |
|      6      |     Din      |           |
|    rx(0)    |              |    tx     |
|    tx(1)    |              |    rx     |


![](https://github.com/mtinet/changeColorByAndroidApp/blob/master/schematic(fritzing)/neo%20pixel(bar).png?raw=true)  
![](https://github.com/mtinet/changeColorByAndroidApp/blob/master/schematic(fritzing)/neo%20pixel(jewel).png?raw=true)  
