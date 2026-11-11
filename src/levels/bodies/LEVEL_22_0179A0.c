/* LEVEL_22:0x0179A0 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_00177C70;
extern int D_00155C34;
extern unsigned char D_0014E78D;
extern unsigned char D_001555EC;

void func_017280(int a);
int func_000E30(int i);
void func_000E08(int i);
void func_000F98(void);
void func_024C40(float *a, float *b);
void *func_000F38(void);
void func_089C90(void *ctx, float *a, float *b, int i);
void func_08E0F8(void);
int func_024988(int a);
void func_017628(int i);
void func_097628(void);
void func_041768(void);
void func_097648(void);
void func_09E5C0(void);
void func_09E5F8(void);
void func_08F740(int a, unsigned int b);

void func_0179A0(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_00177C70 == 1) {
        D_00155C34 = 0xCCAA00;
    } else {
        D_00155C34 = 0;
    }
    func_017280(1);
    for (i = 0; i < 2; i++) {
        if (D_0014E78D != 0 && func_000E30(i) != 0) {
            func_000E08(i);
            func_000F98();
            func_024C40(a, b);
            func_089C90(func_000F38(), a, b, i);
        }
    }
    func_08E0F8();
    for (i = 0; i < 2; i++) {
        if (func_000E30(i) != 0) {
            func_000E08(i);
            func_000F98();
            D_001555EC = func_024988(4);
            func_017628(i);
            func_097628();
            func_041768();
            func_097648();
        }
    }
    func_097628();
    func_09E5C0();
    func_09E5F8();
    func_097648();
    func_08F740(0, 0xFFFFFFFF);
}
