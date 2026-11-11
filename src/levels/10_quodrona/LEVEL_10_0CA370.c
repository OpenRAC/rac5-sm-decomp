/* LEVEL_10:0x0CA370 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00209BB0;

extern int func_130A58(int arg);
extern int func_130310(int id);
extern void func_0D8390(int a, int b, int c, int d);
extern void func_0D83C8(int a);
extern int func_130AD8(void);
extern int func_130B78(void);
extern void func_130E18(void);
extern void func_133560(int *p, int a1);
extern int func_0D8880(int key, int state, int arg);
extern void func_130E70(int value);
extern void func_133590(char *record);

void func_0CA370(int *o)
{
    if (func_130A58(1) != 0) {
        func_0D8390(0, func_130310(0xA57), 0, 0);
        func_0D83C8(5);
    } else if (func_130AD8() != 0) {
        if (D_00209BB0 != 0) {
            func_130B78();
            func_130E18();
            func_133560(o, 0x15);
        } else {
            func_0D8880(2, 0xA58, 0x21A);
            func_130B78();
            func_130E18();
            func_130E70(1);
            func_133590((char *)o);
        }
    } else {
        func_130E70(1);
        func_133560(o, 0x1D);
    }
}
