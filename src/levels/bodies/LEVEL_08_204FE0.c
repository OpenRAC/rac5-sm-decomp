/* LEVEL_08:0x204FE0 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_003EB250;
extern struct P1DADF8 D_002E7040;
extern unsigned char D_0025298C;
extern int D_00252954;
extern int func_228A08(int a0);
extern int func_227938(int a0);
extern void func_204F78(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_204FE0(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_003EB250.f00 != 0) {
        return;
    }
    f = &D_003EB250;
    p = &D_002E7040;
    f->f04 = func_228A08((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_227938((p->f2C << 16) | 0xA00010C5);
    func_204F78();
    if (D_00252954 == 0) {
        D_00252954 = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_00252954 == 0) {
            if (D_0025298C == 0) {
                D_0025298C = 1;
            }
        }
    }
}
