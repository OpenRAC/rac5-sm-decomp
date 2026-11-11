/* LEVEL_04:0x0CE748 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_0021A070;

extern int func_13F078(int arg);
extern int func_13E930(int id);
extern void func_0DC800(int a, int b, int c, int d);
extern void func_0DC838(int a);
extern int func_13F0F8(void);
extern int func_13F198(void);
extern void func_13F438(void);
extern void func_141B60(int *p, int a1);
extern int func_0DCD00(int key, int state, int arg);
extern void func_13F490(int value);
extern void func_141B90(char *record);

void func_0CE748(int *o)
{
    if (func_13F078(1) != 0) {
        func_0DC800(0, func_13E930(0xA57), 0, 0);
        func_0DC838(5);
    } else if (func_13F0F8() != 0) {
        if (D_0021A070 != 0) {
            func_13F198();
            func_13F438();
            func_141B60(o, 0x15);
        } else {
            func_0DCD00(2, 0xA58, 0x21A);
            func_13F198();
            func_13F438();
            func_13F490(1);
            func_141B90((char *)o);
        }
    } else {
        func_13F490(1);
        func_141B60(o, 0x1D);
    }
}
