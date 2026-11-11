/* LEVEL_03:0x0C8D18 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00219230;

extern int func_130FC0(int arg);
extern int func_130878(int id);
extern void func_0D6D38(int a, int b, int c, int d);
extern void func_0D6D70(int a);
extern int func_131040(void);
extern int func_1310E0(void);
extern void func_131380(void);
extern void func_133AA8(int *p, int a1);
extern int func_0D7228(int key, int state, int arg);
extern void func_1313D8(int value);
extern void func_133AD8(char *record);

void func_0C8D18(int *o)
{
    if (func_130FC0(1) != 0) {
        func_0D6D38(0, func_130878(0xA57), 0, 0);
        func_0D6D70(5);
    } else if (func_131040() != 0) {
        if (D_00219230 != 0) {
            func_1310E0();
            func_131380();
            func_133AA8(o, 0x15);
        } else {
            func_0D7228(2, 0xA58, 0x21A);
            func_1310E0();
            func_131380();
            func_1313D8(1);
            func_133AD8((char *)o);
        }
    } else {
        func_1313D8(1);
        func_133AA8(o, 0x1D);
    }
}
