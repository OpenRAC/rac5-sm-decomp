/* LEVEL_08:0x20D408 -- placement copy of LEVEL_04_1E5838.c: one-time setup of three global handles, then a conditional init call. */
struct Cfg {
    char pad_00[0x2C];
    unsigned int w_2c;
    char pad_30[0x9C];
    unsigned int w_cc;
};

extern struct Cfg D_002E7040;
extern int D_00252A58;
extern int D_00252A5C;
extern int D_00252A54;
extern char D_003EB420[];
extern char D_002791E8[];
extern int func_10D720(unsigned int a);
extern int func_114908(unsigned int a);
extern int func_13B5A0(unsigned int a);
extern void func_13B540(void *a, void *b, int c);

void func_20D408(void)
{
    if (D_00252A58 == -1) {
        D_00252A58 = func_10D720((D_002E7040.w_cc << 16) | 0xC0001041);
        D_00252A5C = func_114908((D_002E7040.w_2c << 16) | 0xC00010C1);
    }
    if (D_00252A54 == 0) {
        D_00252A54 = func_13B5A0(0x7108A363);
        func_13B540(D_003EB420, D_002791E8, 2);
    }
}
