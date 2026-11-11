/* LEVEL_18:0x1834F8 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_002E5BF8;
extern struct P1DADF8 D_0024E5C0;
extern unsigned char D_001BF964;
extern int D_001BF92C;
extern int func_196AD8(int a0);
extern int func_195A08(int a0);
extern void func_183490(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1834F8(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_002E5BF8.f00 != 0) {
        return;
    }
    f = &D_002E5BF8;
    p = &D_0024E5C0;
    f->f04 = func_196AD8((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_195A08((p->f2C << 16) | 0xA00010C5);
    func_183490();
    if (D_001BF92C == 0) {
        D_001BF92C = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_001BF92C == 0) {
            if (D_001BF964 == 0) {
                D_001BF964 = 1;
            }
        }
    }
}
