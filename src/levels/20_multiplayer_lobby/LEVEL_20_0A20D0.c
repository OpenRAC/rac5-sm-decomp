/* LEVEL_20:0x0A20D0 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00111308;

extern int func_0E2860(int arg);
extern int func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);
extern void func_0B0BB0(int a);
extern int func_0E28E0(void);
extern int func_0E2980(void);
extern void func_0E2B58(void);
extern void func_0E4B98(int *p, int a1);
extern int func_0B1068(int key, int state, int arg);
extern void func_0E2B80(int value);
extern void func_0E4BC8(char *record);

void func_0A20D0(int *o)
{
    if (func_0E2860(1) != 0) {
        func_0B0B78(0, func_0E2118(0xA57), 0, 0);
        func_0B0BB0(5);
    } else if (func_0E28E0() != 0) {
        if (D_00111308 != 0) {
            func_0E2980();
            func_0E2B58();
            func_0E4B98(o, 0x15);
        } else {
            func_0B1068(2, 0xA58, 0x21A);
            func_0E2980();
            func_0E2B58();
            func_0E2B80(1);
            func_0E4BC8((char *)o);
        }
    } else {
        func_0E2B80(1);
        func_0E4B98(o, 0x1D);
    }
}
