#ifndef __PRINT_H__
#define __PRINT_H__

#include "config.h"

// #include "stdint.h"



// int put_string_xy(char* str,int row,int col,uint8_t fgc,uint8_t bgc);
// int put_string(char* str,uint8_t fgc,uint8_t bgc);
// int put_int(int a,int row,int col,uint8_t fgc,uint8_t bgc);
// void set_cursor(int row,int col);

#include "stdint.h"
void put_char(uint8_t char_asci);
void put_str(char* message);
void put_int(int num);	 // 以16进制打印
void roll_screen();
void itoa(int a,char* str,int base);
int get_cursor();
void set_cursor(uint32_t cursor_pos);
void cls_screen(void);

#endif /* __PRINT_H__ */
