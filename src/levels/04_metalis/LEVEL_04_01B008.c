/* LEVEL_04:0x01B008 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_00234170;
extern int D_0020FD74;
extern unsigned char D_0020858D;
extern unsigned char D_0020F72C;

void func_01A8E8(int a);
int func_000E58(int i);
void func_000E08(int i);
void func_001030(void);
void func_02A150(float *a, float *b);
void *func_000FD0(void);
void func_09C0D8(void *ctx, float *a, float *b, int i);
void func_0A4C60(void);
int func_029E98(int a);
void func_01AC90(int i);
void func_0AE268(void);
void func_04D6E0(void);
void func_0AE288(void);
void func_0B5200(void);
void func_0B5238(void);
void func_0A6340(int a, unsigned int b);

void func_01B008(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_00234170 == 1) {
        D_0020FD74 = 0xCCAA00;
    } else {
        D_0020FD74 = 0;
    }
    func_01A8E8(1);
    for (i = 0; i < 2; i++) {
        if (D_0020858D != 0 && func_000E58(i) != 0) {
            func_000E08(i);
            func_001030();
            func_02A150(a, b);
            func_09C0D8(func_000FD0(), a, b, i);
        }
    }
    func_0A4C60();
    for (i = 0; i < 2; i++) {
        if (func_000E58(i) != 0) {
            func_000E08(i);
            func_001030();
            D_0020F72C = func_029E98(4);
            func_01AC90(i);
            func_0AE268();
            func_04D6E0();
            func_0AE288();
        }
    }
    func_0AE268();
    func_0B5200();
    func_0B5238();
    func_0AE288();
    func_0A6340(0, 0xFFFFFFFF);
}
