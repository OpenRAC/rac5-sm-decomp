/* LEVEL_19:0x17FB58 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_002E5E30;
extern struct P1DADF8 D_0024E3C0;
extern unsigned char D_001BF644;
extern int D_001BF60C;
extern int func_195950(int a0);
extern int func_194880(int a0);
extern void func_17FAF0(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_17FB58(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_002E5E30.f00 != 0) {
        return;
    }
    f = &D_002E5E30;
    p = &D_0024E3C0;
    f->f04 = func_195950((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_194880((p->f2C << 16) | 0xA00010C5);
    func_17FAF0();
    if (D_001BF60C == 0) {
        D_001BF60C = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_001BF60C == 0) {
            if (D_001BF644 == 0) {
                D_001BF644 = 1;
            }
        }
    }
}
