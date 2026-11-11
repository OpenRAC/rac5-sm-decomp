/* LEVEL_17:0x176508 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_002D6E78;
extern struct P1DADF8 D_0023F540;
extern unsigned char D_001B1914;
extern int D_001B18DC;
extern int func_188C80(int a0);
extern int func_187BB0(int a0);
extern void func_1764A0(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_176508(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_002D6E78.f00 != 0) {
        return;
    }
    f = &D_002D6E78;
    p = &D_0023F540;
    f->f04 = func_188C80((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_187BB0((p->f2C << 16) | 0xA00010C5);
    func_1764A0();
    if (D_001B18DC == 0) {
        D_001B18DC = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_001B18DC == 0) {
            if (D_001B1914 == 0) {
                D_001B1914 = 1;
            }
        }
    }
}
