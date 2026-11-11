/* LEVEL_10:0x1CE480 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_003A1F20;
extern struct P1DADF8 D_002A11C0;
extern unsigned char D_00211F74;
extern int D_00211F3C;
extern int func_1ECBB8(int a0);
extern int func_1EBAE8(int a0);
extern void func_1CE418(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1CE480(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_003A1F20.f00 != 0) {
        return;
    }
    f = &D_003A1F20;
    p = &D_002A11C0;
    f->f04 = func_1ECBB8((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1EBAE8((p->f2C << 16) | 0xA00010C5);
    func_1CE418();
    if (D_00211F3C == 0) {
        D_00211F3C = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_00211F3C == 0) {
            if (D_00211F74 == 0) {
                D_00211F74 = 1;
            }
        }
    }
}
