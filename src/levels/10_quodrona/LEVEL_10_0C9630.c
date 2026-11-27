/* LEVEL_10:0x0C9630 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_00209C32;
extern unsigned char D_00209BD0;
extern int func_130A58(int a);
extern int func_130310(int id);
extern void func_0D8390(int a, int b, int c, int d);
extern void func_0D83C8(int a);
extern int func_130B08(void);
extern int func_131668(void);
extern int func_130BF0(void);
extern int func_0D8EA0(void);
extern void func_130E18(void);
extern int func_130B78(void);
extern void func_130E70(int value);
extern void func_133560(int *p, int a1);

void func_0C9630(int *o)
{
    if (D_00209C32 == 0) {
        func_133560(o, 0x1D);
        return;
    }
    if (func_130A58(1) != 0) {
        func_0D8390(0, func_130310(0xA5D), 0, 0);
        func_0D83C8(5);
        return;
    }
    if (func_130B08() == 0) {
        if (func_131668() != 0) {
            D_00209BD0 = 0;
            func_130BF0();
            func_0D8EA0();
        }
        func_133560(o, 0x1F);
    } else {
        func_130E18();
        func_130B78();
        func_133560(o, 0x11);
        return;
    }
    func_130E70(1);
}
