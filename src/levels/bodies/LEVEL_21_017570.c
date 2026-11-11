/* LEVEL_21:0x017570 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_0016EF70;
extern int D_0014B534;
extern unsigned char D_00144075;
extern unsigned char D_0014AEEC;

void func_016E50(int a);
int func_000BA8(int i);
void func_000B58(int i);
void func_000D10(void);
void func_023E80(float *a, float *b);
void *func_000CB0(void);
void func_07CF68(void *ctx, float *a, float *b, int i);
void func_0803B8(void);
int func_023BC8(int a);
void func_0171F8(int i);
void func_0898E0(void);
void func_03DCA8(void);
void func_089900(void);
void func_090878(void);
void func_0908B0(void);
void func_081A28(int a, unsigned int b);

void func_017570(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_0016EF70 == 1) {
        D_0014B534 = 0xCCAA00;
    } else {
        D_0014B534 = 0;
    }
    func_016E50(1);
    for (i = 0; i < 2; i++) {
        if (D_00144075 != 0 && func_000BA8(i) != 0) {
            func_000B58(i);
            func_000D10();
            func_023E80(a, b);
            func_07CF68(func_000CB0(), a, b, i);
        }
    }
    func_0803B8();
    for (i = 0; i < 2; i++) {
        if (func_000BA8(i) != 0) {
            func_000B58(i);
            func_000D10();
            D_0014AEEC = func_023BC8(4);
            func_0171F8(i);
            func_0898E0();
            func_03DCA8();
            func_089900();
        }
    }
    func_0898E0();
    func_090878();
    func_0908B0();
    func_089900();
    func_081A28(0, 0xFFFFFFFF);
}
