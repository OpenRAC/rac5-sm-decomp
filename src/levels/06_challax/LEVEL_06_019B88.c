/* LEVEL_06:0x019B88 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_00209670;
extern int D_001E57B4;
extern unsigned char D_001DE30D;
extern unsigned char D_001E516C;

void func_019468(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_028A90(float *a, float *b);
void *func_0011C8(void);
void func_091CE0(void *ctx, float *a, float *b, int i);
void func_09A220(void);
int func_0287D8(int a);
void func_019810(int i);
void func_0A37E8(void);
void func_0483E8(void);
void func_0A3808(void);
void func_0AA780(void);
void func_0AA7B8(void);
void func_09B900(int a, unsigned int b);

void func_019B88(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_00209670 == 1) {
        D_001E57B4 = 0xCCAA00;
    } else {
        D_001E57B4 = 0;
    }
    func_019468(1);
    for (i = 0; i < 2; i++) {
        if (D_001DE30D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_028A90(a, b);
            func_091CE0(func_0011C8(), a, b, i);
        }
    }
    func_09A220();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_001E516C = func_0287D8(4);
            func_019810(i);
            func_0A37E8();
            func_0483E8();
            func_0A3808();
        }
    }
    func_0A37E8();
    func_0AA780();
    func_0AA7B8();
    func_0A3808();
    func_09B900(0, 0xFFFFFFFF);
}
