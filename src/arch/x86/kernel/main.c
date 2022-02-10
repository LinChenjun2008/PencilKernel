#include "debug.h"
#include "global.h"
#include "graphic.h"
#include "init.h"
#include "io.h"
#include "memory.h"
#include "print.h"
#include "string.h"

int main()
{
    char buf[100] = {"Pencil-Kernel (PKn)"};
    set_cursor(ScrnX * 8);
    int i;
    for(i = 0;i < 100;i++)
    {
        put_char(buf[i]);
    }
    put_char('P');
    put_char('e');
    put_char('n');
    put_char('c');
    put_char('i');
    put_char('l');
    put_char('-');
    put_char('K');
    put_char('e');
    put_char('r');
    put_char('n');
    put_char('e');
    put_char('l');
    put_char(' ');
    put_char('b');
    put_char('u');
    put_char('i');
    put_char('l');
    put_char('d');
    put_char(' ');
    put_char('0');
    put_char('.');
    put_char('0');
    put_char('.');
    put_char('0');
    put_char(' ');
    put_char('t');
    put_char('\n');

    //put_str("hello word!\n"); //显示不出来,why?
    init_all();
    //put_str("init down!\n");
    // put_str_graphic(&Screen,16,16,0x00ffffff,"hello world!");
    put_char_graphic(&Screen,20,20,0x00ff0000,'A');
    // intr_enable(); /* 开中断 */
    while(1) /* 这个死循环不能少 */
    {
        ;
    }
    return 0; /* 这句return应该永远不会执行,放在这里只是摆设用的 */
}
