/* LEVEL_07:0x1D67B8 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_003AE208;
extern struct P1DADF8 D_002AD6C0;
extern unsigned char D_0021DC44;
extern int D_0021DC0C;
extern int func_1F5BD8(int a0);
extern int func_1F4B08(int a0);
extern void func_1D6750(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1D67B8(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_003AE208.f00 != 0) {
        return;
    }
    f = &D_003AE208;
    p = &D_002AD6C0;
    f->f04 = func_1F5BD8((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1F4B08((p->f2C << 16) | 0xA00010C5);
    func_1D6750();
    if (D_0021DC0C == 0) {
        D_0021DC0C = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_0021DC0C == 0) {
            if (D_0021DC44 == 0) {
                D_0021DC44 = 1;
            }
        }
    }
}
