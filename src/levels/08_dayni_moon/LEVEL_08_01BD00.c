/* LEVEL_08:0x01BD00 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_00264470;
extern int D_0023F774;
extern unsigned char D_00237F8D;
extern unsigned char D_0023F12C;

void func_01B5E0(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_02AC20(float *a, float *b);
void *func_0011C8(void);
void func_0A1070(void *ctx, float *a, float *b, int i);
void func_0AA348(void);
int func_02A968(int a);
void func_01B988(int i);
void func_0B3950(void);
void func_050DC8(void);
void func_0B3970(void);
void func_0BA8E8(void);
void func_0BA920(void);
void func_0ABA28(int a, unsigned int b);

void func_01BD00(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_00264470 == 1) {
        D_0023F774 = 0xCCAA00;
    } else {
        D_0023F774 = 0;
    }
    func_01B5E0(1);
    for (i = 0; i < 2; i++) {
        if (D_00237F8D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_02AC20(a, b);
            func_0A1070(func_0011C8(), a, b, i);
        }
    }
    func_0AA348();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_0023F12C = func_02A968(4);
            func_01B988(i);
            func_0B3950();
            func_050DC8();
            func_0B3970();
        }
    }
    func_0B3950();
    func_0BA8E8();
    func_0BA920();
    func_0B3970();
    func_0ABA28(0, 0xFFFFFFFF);
}
