/* LEVEL_16:0x0B7BA0 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001AEC28;

extern int func_10FA78(int arg);
extern int func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);
extern void func_0C6680(int a);
extern int func_10FAF8(void);
extern int func_10FB98(void);
extern void func_10FD70(void);
extern void func_111DB0(int *p, int a1);
extern int func_0C6B38(int key, int state, int arg);
extern void func_10FD98(int value);
extern void func_111DE0(char *record);

void func_0B7BA0(int *o)
{
    if (func_10FA78(1) != 0) {
        func_0C6648(0, func_10F330(0xA57), 0, 0);
        func_0C6680(5);
    } else if (func_10FAF8() != 0) {
        if (D_001AEC28 != 0) {
            func_10FB98();
            func_10FD70();
            func_111DB0(o, 0x15);
        } else {
            func_0C6B38(2, 0xA58, 0x21A);
            func_10FB98();
            func_10FD70();
            func_10FD98(1);
            func_111DE0((char *)o);
        }
    } else {
        func_10FD98(1);
        func_111DB0(o, 0x1D);
    }
}
