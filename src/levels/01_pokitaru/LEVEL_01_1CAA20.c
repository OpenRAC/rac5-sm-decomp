/* LEVEL_01:0x1CAA20 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_00398818;
extern struct P1DADF8 D_00297DC0;
extern unsigned char D_00208FFC;
extern int D_00208FC4;
extern int func_1E5260(int a0);
extern int func_1E4190(int a0);
extern void func_1CA9B8(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1CAA20(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_00398818.f00 != 0) {
        return;
    }
    f = &D_00398818;
    p = &D_00297DC0;
    f->f04 = func_1E5260((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1E4190((p->f2C << 16) | 0xA00010C5);
    func_1CA9B8();
    if (D_00208FC4 == 0) {
        D_00208FC4 = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_00208FC4 == 0) {
            if (D_00208FFC == 0) {
                D_00208FFC = 1;
            }
        }
    }
}
