/* LEVEL_07:0x01BA48 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_0022F4F0;
extern int D_0020ABB4;
extern unsigned char D_0020370D;
extern unsigned char D_0020A56C;

void func_01B328(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_02A9E8(float *a, float *b);
void *func_0011C8(void);
void func_09AFB0(void *ctx, float *a, float *b, int i);
void func_0A1A28(void);
int func_02A730(int a);
void func_01B6D0(int i);
void func_0AB018(void);
void func_04C290(void);
void func_0AB038(void);
void func_0B1FB0(void);
void func_0B1FE8(void);
void func_0A3130(int a, unsigned int b);

void func_01BA48(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_0022F4F0 == 1) {
        D_0020ABB4 = 0xCCAA00;
    } else {
        D_0020ABB4 = 0;
    }
    func_01B328(1);
    for (i = 0; i < 2; i++) {
        if (D_0020370D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_02A9E8(a, b);
            func_09AFB0(func_0011C8(), a, b, i);
        }
    }
    func_0A1A28();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_0020A56C = func_02A730(4);
            func_01B6D0(i);
            func_0AB018();
            func_04C290();
            func_0AB038();
        }
    }
    func_0AB018();
    func_0B1FB0();
    func_0B1FE8();
    func_0AB038();
    func_0A3130(0, 0xFFFFFFFF);
}
