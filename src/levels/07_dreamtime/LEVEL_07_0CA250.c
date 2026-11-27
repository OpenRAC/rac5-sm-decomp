/* LEVEL_07:0x0CA250 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_00214F32;
extern unsigned char D_00214ED0;
extern int func_135BF8(int a);
extern int func_1354B0(int id);
extern void func_0D8FB0(int a, int b, int c, int d);
extern void func_0D8FE8(int a);
extern int func_135CA8(void);
extern int func_1367E8(void);
extern int func_135D90(void);
extern int func_0D9AC0(void);
extern void func_135FB8(void);
extern int func_135D18(void);
extern void func_136010(int value);
extern void func_1386E0(int *p, int a1);

void func_0CA250(int *o)
{
    if (D_00214F32 == 0) {
        func_1386E0(o, 0x1D);
        return;
    }
    if (func_135BF8(1) != 0) {
        func_0D8FB0(0, func_1354B0(0xA5D), 0, 0);
        func_0D8FE8(5);
        return;
    }
    if (func_135CA8() == 0) {
        if (func_1367E8() != 0) {
            D_00214ED0 = 0;
            func_135D90();
            func_0D9AC0();
        }
        func_1386E0(o, 0x1F);
    } else {
        func_135FB8();
        func_135D18();
        func_1386E0(o, 0x11);
        return;
    }
    func_136010(1);
}
