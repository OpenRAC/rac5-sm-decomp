/* LEVEL_23:0x019E98 -- placement copy of LEVEL_01_01B388.c: sets up the two-view draw: picks the tint, renders each active view and closes the pass. */

extern int D_001ED970;
extern int D_001C9CB4;
extern unsigned char D_001C280D;
extern unsigned char D_001C966C;

void func_019778(int a);
int func_001050(int i);
void func_001000(int i);
void func_001228(void);
void func_028218(float *a, float *b);
void *func_0011C8(void);
void func_08E958(void *ctx, float *a, float *b, int i);
void func_096790(void);
int func_027F60(int a);
void func_019B20(int i);
void func_09FD88(void);
void func_0450A0(void);
void func_09FDA8(void);
void func_0A6D20(void);
void func_0A6D58(void);
void func_097E70(int a, unsigned int b);

void func_019E98(void)
{
    float a[16];
    float b[16];
    unsigned int i;

    if (D_001ED970 == 1) {
        D_001C9CB4 = 0xCCAA00;
    } else {
        D_001C9CB4 = 0;
    }
    func_019778(1);
    for (i = 0; i < 2; i++) {
        if (D_001C280D != 0 && func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            func_028218(a, b);
            func_08E958(func_0011C8(), a, b, i);
        }
    }
    func_096790();
    for (i = 0; i < 2; i++) {
        if (func_001050(i) != 0) {
            func_001000(i);
            func_001228();
            D_001C966C = func_027F60(4);
            func_019B20(i);
            func_09FD88();
            func_0450A0();
            func_09FDA8();
        }
    }
    func_09FD88();
    func_0A6D20();
    func_0A6D58();
    func_09FDA8();
    func_097E70(0, 0xFFFFFFFF);
}
