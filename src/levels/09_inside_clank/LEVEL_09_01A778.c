/* LEVEL_09:0x01A778 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_002043F0;
extern int D_001E06B4;
extern unsigned char D_001D920D;
extern unsigned char D_001E006C;

void func_01A058(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_029510(float *a, float *b);
void *func_0011C8(void);
void func_095880(void *ctx, float *a, float *b, int i);
void func_09CD00(void);
int func_029258(int a);
void func_01A400(int i);
void func_0A62C8(void);
void func_0481A0(void);
void func_0A62E8(void);
void func_0AD260(void);
void func_0AD298(void);
void func_09E3E0(int a, unsigned int b);

void func_01A778(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_002043F0 == 1) {
        D_001E06B4 = 0xCCAA00;
    } else {
        D_001E06B4 = 0;
    }
    func_01A058(1);
    for (i = 0; i < 2; i++) {
        if (D_001D920D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_029510(a, b);
            func_095880(func_0011C8(), a, b, i);
        }
    }
    func_09CD00();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_001E006C = func_029258(4);
            func_01A400(i);
            func_0A62C8();
            func_0481A0();
            func_0A62E8();
        }
    }
    func_0A62C8();
    func_0AD260();
    func_0AD298();
    func_0A62E8();
    func_09E3E0(0, 0xFFFFFFFF);
}
