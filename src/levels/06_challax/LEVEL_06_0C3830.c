/* LEVEL_06:0x0C3830 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001EFAB0;

extern int func_1292C8(int arg);
extern int func_128B80(int id);
extern void func_0D1850(int a, int b, int c, int d);
extern void func_0D1888(int a);
extern int func_129348(void);
extern int func_1293E8(void);
extern void func_129688(void);
extern void func_12BDB0(int *p, int a1);
extern int func_0D1D40(int key, int state, int arg);
extern void func_1296E0(int value);
extern void func_12BDE0(char *record);

void func_0C3830(int *o)
{
    if (func_1292C8(1) != 0) {
        func_0D1850(0, func_128B80(0xA57), 0, 0);
        func_0D1888(5);
    } else if (func_129348() != 0) {
        if (D_001EFAB0 != 0) {
            func_1293E8();
            func_129688();
            func_12BDB0(o, 0x15);
        } else {
            func_0D1D40(2, 0xA58, 0x21A);
            func_1293E8();
            func_129688();
            func_1296E0(1);
            func_12BDE0((char *)o);
        }
    } else {
        func_1296E0(1);
        func_12BDB0(o, 0x1D);
    }
}
