/* LEVEL_01:0x0C81F0 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_00200C32;
extern unsigned char D_00200BD0;
extern int func_132BF8(int a);
extern int func_1324B0(int id);
extern void func_0D6F50(int a, int b, int c, int d);
extern void func_0D6F88(int a);
extern int func_132CA8(void);
extern int func_1337E8(void);
extern int func_132D90(void);
extern int func_0D7A60(void);
extern void func_132FB8(void);
extern int func_132D18(void);
extern void func_133010(int value);
extern void func_1356E0(int *p, int a1);

void func_0C81F0(int *o)
{
    if (D_00200C32 == 0) {
        func_1356E0(o, 0x1D);
        return;
    }
    if (func_132BF8(1) != 0) {
        func_0D6F50(0, func_1324B0(0xA5D), 0, 0);
        func_0D6F88(5);
        return;
    }
    if (func_132CA8() == 0) {
        if (func_1337E8() != 0) {
            D_00200BD0 = 0;
            func_132D90();
            func_0D7A60();
        }
        func_1356E0(o, 0x1F);
    } else {
        func_132FB8();
        func_132D18();
        func_1356E0(o, 0x11);
        return;
    }
    func_133010(1);
}
