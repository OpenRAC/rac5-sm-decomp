/* LEVEL_05:0x1B9E30 -- placement copy of LEVEL_01_1CAA20.c: placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_0038FBA8;
extern struct P1DADF8 D_00283C80;
extern unsigned char D_001F7F74;
extern int D_001F7F3C;
extern int func_1D4658(int a0);
extern int func_1D3588(int a0);
extern void func_1B9DC8(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1B9E30(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_0038FBA8.f00 != 0) {
        return;
    }
    f = &D_0038FBA8;
    p = &D_00283C80;
    f->f04 = func_1D4658((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1D3588((p->f2C << 16) | 0xA00010C5);
    func_1B9DC8();
    if (D_001F7F3C == 0) {
        D_001F7F3C = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_001F7F3C == 0) {
            if (D_001F7F74 == 0) {
                D_001F7F74 = 1;
            }
        }
    }
}
