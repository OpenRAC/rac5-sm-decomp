/* LEVEL_05:0x01A920 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_002096F0;
extern int D_001E5C34;
extern unsigned char D_001DE78D;
extern unsigned char D_001E55EC;

void func_01A200(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_029320(float *a, float *b);
void *func_0011C8(void);
void func_096630(void *ctx, float *a, float *b, int i);
void func_09E000(void);
int func_029068(int a);
void func_01A5A8(int i);
void func_0A75D8(void);
void func_0498C0(void);
void func_0A75F8(void);
void func_0AE570(void);
void func_0AE5A8(void);
void func_09F6F0(int a, unsigned int b);

void func_01A920(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_002096F0 == 1) {
        D_001E5C34 = 0xCCAA00;
    } else {
        D_001E5C34 = 0;
    }
    func_01A200(1);
    for (i = 0; i < 2; i++) {
        if (D_001DE78D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_029320(a, b);
            func_096630(func_0011C8(), a, b, i);
        }
    }
    func_09E000();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_001E55EC = func_029068(4);
            func_01A5A8(i);
            func_0A75D8();
            func_0498C0();
            func_0A75F8();
        }
    }
    func_0A75D8();
    func_0AE570();
    func_0AE5A8();
    func_0A75F8();
    func_09F6F0(0, 0xFFFFFFFF);
}
