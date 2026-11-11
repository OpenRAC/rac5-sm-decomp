/* LEVEL_04:0x1DE068 -- placement copy of LEVEL_03_1DADF8.c: one-time setup: records two codes derived from a config word, then looks up a sound once and sets a done flag. */
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

extern struct F1DADF8 D_003B3D08;
extern struct P1DADF8 D_002B25C0;
extern unsigned char D_00222794;
extern int D_0022275C;
extern int func_1FD400(int a0);
extern int func_1FC330(int a0);
extern void func_1DE000(void);
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

void func_1DE068(void)
{
    struct F1DADF8 *f;
    struct P1DADF8 *p;

    if (D_003B3D08.f00 != 0) {
        return;
    }
    f = &D_003B3D08;
    p = &D_002B25C0;
    f->f04 = func_1FD400((p->f2C << 16) | 0xA00010C5);
    f->f08 = func_1FC330((p->f2C << 16) | 0xA00010C5);
    func_1DE000();
    if (D_0022275C == 0) {
        D_0022275C = GLOBALWAD_FindGlobalSound__FUi(0x9A914C5A);
        if (D_0022275C == 0) {
            if (D_00222794 == 0) {
                D_00222794 = 1;
            }
        }
    }
}
