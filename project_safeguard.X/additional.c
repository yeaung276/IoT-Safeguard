////#include "lcd.h"
//#include "esp8266.h"
//#include "user.h"
//#include <stdint.h>         /* For uint8_t definition */
////#include <stdbool.h>        /* For true/false definition */
//#include <string.h>
//#define _XTAL_FREQ 20000000
//
//unsigned char __get_time(){
//    unsigned char mess[];
//        _esp8266_waitFor("+IPD,");
//
//        //string length 
//        unsigned char charater;
//        do{
//            charater = _esp8266_getch();
//        }while(charater != ',');
//        unsigned char len = _esp8266_getch() - 0x30;
//        uint8_t len8 = len - 1;
////        LCD_putc(len + 0x30);
//        //string
//        do{
//            charater = _esp8266_getch();
//        }while(charater != ':');
//        int i = 0;
//        for(i = 0;i<len;i++){
//        mess[i] = _esp8266_getch();
//        }
//        mess[i] = 0;
////        LCD_puts(mess);
////        LCD_putc('c');
//        __delay_ms(1000);
//        return (len8);
//}
//
//void get_time(time *_time){
//    char min1 = __get_time();
//    char min0 = __get_time();
//    char hr1 = __get_time();
//    char hr0 = __get_time();
//    char day1 = __get_time();
//    char date1 = __get_time();
//    char date0 = __get_time();
//    char mnt1 = __get_time();
//    char mnt0 = __get_time();
//    char yr1 = __get_time();
//    char yr0 = __get_time();
//    
//    _time->min = min1<<4 + min0;
//    _time->hour= hr1<<4 + hr0;
//    _time->weekDay= day1;
//    _time->date = date1<<4 + date0;
//    _time->month= mnt1<<4 + mnt0;
//    _time->year = yr1<<4 + yr0;
//    
//    char sec_0 = _time->sec%10 + 0x30;
//    char sec_1 = (_time->sec/10)+ 0x30;
//    char min_0 = _time->min%10 + 0x30;
//    char min_1 = _time->min/10 + 0x30;
//    char hour_0 = _time->hour%10 + 0x30;
//    char hour_1 = _time->hour/10 + 0x30;
//    
////    //showing time
////    LCD_Set_Cursor(0,0);
////    LCD_putc(hour_1);
////    LCD_putc(hour_0);
////    LCD_putc(':');
////    LCD_putc(min_1);
////    LCD_putc(min_0);
////    LCD_putc(':');
////    LCD_putc(sec_1);
////    LCD_putc(sec_0);
//
//}
