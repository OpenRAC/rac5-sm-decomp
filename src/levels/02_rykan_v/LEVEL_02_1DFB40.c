/* LEVEL_02:0x1DFB40 -- placement copy of LEVEL_01_1CAA20.c: placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
struct F1DADF8 {
    unsigned char f00;
    char pad01[0x04 - 0x01];
    int f04;
    int f08;
};

struct P1DADF8 {
    char pad0[0x2C];
    int f2C;
};

extern struct F1DADF8 D_003B0780;
extern struct P1DADF8 D_002AF2C0;
extern unsigned char D_0021DF54;
extern int D_0021DF1C;
extern int func_1F9EF8(int a0);
extern int func_1F8E28(int a0);
extern void func_1DFAD8(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1DFB40(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_003B0780.f00 != 0) {
        return;
    }
    f = &D_003B0780;
    p = &D_002AF2C0;
    f->f04 = func_1F9EF8((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1F8E28((p->f2C << 16) | 0xA00010C5);
    func_1DFAD8();
    if (D_0021DF1C == 0) {
        D_0021DF1C = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_0021DF1C == 0) {
            if (D_0021DF54 == 0) {
                D_0021DF54 = 1;
            }
        }
    }
}
