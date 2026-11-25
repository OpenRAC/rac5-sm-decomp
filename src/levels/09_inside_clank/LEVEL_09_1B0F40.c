/* LEVEL_09:0x1B0F40 -- placement copy of LEVEL_01_1CAA20.c: placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_00380000;
extern struct P1DADF8 D_0027F540;
extern unsigned char D_001F2BEC;
extern int D_001F2BB4;
extern int func_1CD9C8(int a0);
extern int func_1CC8F8(int a0);
extern void func_1B0ED8(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1B0F40(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_00380000.f00 != 0) {
        return;
    }
    f = &D_00380000;
    p = &D_0027F540;
    f->f04 = func_1CD9C8((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1CC8F8((p->f2C << 16) | 0xA00010C5);
    func_1B0ED8();
    if (D_001F2BB4 == 0) {
        D_001F2BB4 = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_001F2BB4 == 0) {
            if (D_001F2BEC == 0) {
                D_001F2BEC = 1;
            }
        }
    }
}
