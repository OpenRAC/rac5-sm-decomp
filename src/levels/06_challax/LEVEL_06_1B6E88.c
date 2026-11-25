/* LEVEL_06:0x1B6E88 -- placement copy of LEVEL_01_1CAA20.c: placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_00385238;
extern struct P1DADF8 D_00284B40;
extern unsigned char D_001F7EBC;
extern int D_001F7E84;
extern int func_1D2AA8(int a0);
extern int func_1D19D8(int a0);
extern void func_1B6E20(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1B6E88(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_00385238.f00 != 0) {
        return;
    }
    f = &D_00385238;
    p = &D_00284B40;
    f->f04 = func_1D2AA8((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1D19D8((p->f2C << 16) | 0xA00010C5);
    func_1B6E20();
    if (D_001F7E84 == 0) {
        D_001F7E84 = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_001F7E84 == 0) {
            if (D_001F7EBC == 0) {
                D_001F7EBC = 1;
            }
        }
    }
}
