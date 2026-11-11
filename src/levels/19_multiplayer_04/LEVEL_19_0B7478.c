/* LEVEL_19:0x0B7478 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001AFDA8;

extern int func_110118(int arg);
extern int func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);
extern void func_0C5F58(int a);
extern int func_110198(void);
extern int func_110238(void);
extern void func_110410(void);
extern void func_112450(int *p, int a1);
extern int func_0C6410(int key, int state, int arg);
extern void func_110438(int value);
extern void func_112480(char *record);

void func_0B7478(int *o)
{
    if (func_110118(1) != 0) {
        func_0C5F20(0, func_10F9D0(0xA57), 0, 0);
        func_0C5F58(5);
    } else if (func_110198() != 0) {
        if (D_001AFDA8 != 0) {
            func_110238();
            func_110410();
            func_112450(o, 0x15);
        } else {
            func_0C6410(2, 0xA58, 0x21A);
            func_110238();
            func_110410();
            func_110438(1);
            func_112480((char *)o);
        }
    } else {
        func_110438(1);
        func_112450(o, 0x1D);
    }
}
