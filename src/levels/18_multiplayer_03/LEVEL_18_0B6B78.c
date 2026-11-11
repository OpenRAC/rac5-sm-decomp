/* LEVEL_18:0x0B6B78 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001B00A8;

extern int func_10E728(int arg);
extern int func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);
extern void func_0C5658(int a);
extern int func_10E7A8(void);
extern int func_10E848(void);
extern void func_10EA20(void);
extern void func_110A60(int *p, int a1);
extern int func_0C5B10(int key, int state, int arg);
extern void func_10EA48(int value);
extern void func_110A90(char *record);

void func_0B6B78(int *o)
{
    if (func_10E728(1) != 0) {
        func_0C5620(0, func_10DFE0(0xA57), 0, 0);
        func_0C5658(5);
    } else if (func_10E7A8() != 0) {
        if (D_001B00A8 != 0) {
            func_10E848();
            func_10EA20();
            func_110A60(o, 0x15);
        } else {
            func_0C5B10(2, 0xA58, 0x21A);
            func_10E848();
            func_10EA20();
            func_10EA48(1);
            func_110A90((char *)o);
        }
    } else {
        func_10EA48(1);
        func_110A60(o, 0x1D);
    }
}
