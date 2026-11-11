/* LEVEL_03:0x01B0F0 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_002336F0;
extern int D_0020EF34;
extern unsigned char D_00207A8D;
extern unsigned char D_0020E8EC;

void func_01A9D0(int a);
int func_001050(int i);
void func_001000(int i);
void func_001250(void);
void func_02A4A0(float *a, float *b);
void *func_0011F0(void);
void func_098D58(void *ctx, float *a, float *b, int i);
void func_09F7D0(void);
int func_02A1E8(int a);
void func_01AD78(int i);
void func_0A8D98(void);
void func_049F80(void);
void func_0A8DB8(void);
void func_0AFD30(void);
void func_0AFD68(void);
void func_0A0EB0(int a, unsigned int b);

void func_01B0F0(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_002336F0 == 1) {
        D_0020EF34 = 0xCCAA00;
    } else {
        D_0020EF34 = 0;
    }
    func_01A9D0(1);
    for (i = 0; i < 2; i++) {
        if (D_00207A8D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001250();
            func_02A4A0(a, b);
            func_098D58(func_0011F0(), a, b, i);
        }
    }
    func_09F7D0();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001250();
            D_0020E8EC = func_02A1E8(4);
            func_01AD78(i);
            func_0A8D98();
            func_049F80();
            func_0A8DB8();
        }
    }
    func_0A8D98();
    func_0AFD30();
    func_0AFD68();
    func_0A8DB8();
    func_0A0EB0(0, 0xFFFFFFFF);
}
