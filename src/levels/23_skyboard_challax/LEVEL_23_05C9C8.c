/* LEVEL_23:0x05C9C8 -- placement copy of LEVEL_01_063210.c: resets an object's three transform blocks and the shared state, then fires the intro effects. */
typedef struct {
    float p[4];
    char pad10[0x10];
    int mode;
    float f24;
    float f28;
    int f2c;
} G;

extern G D_002065D8;
extern float D_001C7D90[];
extern void func_0C17F0(int a);
extern void func_1739F0(int a);
extern void func_05C6D8(void);
extern void func_074128(int a, int b, int c, int d, float e, float f);
extern void func_167D50(int a);
extern int func_064338(void *a);
extern void func_0641F8(void *a, int b);
extern void func_035360(int a);
extern void func_0353B8(int a);
extern void func_035610(void);
extern void func_073A70(int a);
extern void func_0036F8(int a, int b, float c, float d);
extern void func_003728(int a, int b, float c, float d);
extern void func_003898(int a, int b, float c, float d);

int func_05C9C8(char *a0)
{
    char *a1;
    int x;
    float *v;

    func_0C17F0(-1);
    D_002065D8.mode = -1;

    a1 = a0 + 0xFD0;
    *(short *)(a0 + 0x108) = 0;
    *(int *)(a1 + 0x10) = *(int *)(a0 + 0x5B4);
    *(char *)(a1 + 0xE) = 2;
    x = *(int *)(*(int *)(*(int *)(a0 + 0x5B4) + 0x54));
    if (x != 0)
        func_1739F0(x);
    if (*(int *)(a0 + 0x59C) != 0)
        *(int *)(*(int *)(*(int *)(a0 + 0x59C) + 0x48) + 0xDC) = 0;
    {
    float zero = 0.0f;
    float one = 1.0f;
    *(int *)(a0 + 0x59C) = *(int *)(a0 + 0x5B4);
    *(float *)(a0 + 0x3B8) = one;
    *(float *)(a0 + 0x3B4) = one;
    *(float *)(a0 + 0x3B0) = one;
    *(float *)(a0 + 0x420) = one;
    *(float *)(a0 + 0x41C) = one;
    *(float *)(a0 + 0x418) = one;
    *(float *)(a0 + 0x464) = one;
    *(float *)(a0 + 0x460) = one;
    *(float *)(a0 + 0x45C) = one;
    *(float *)(a0 + 0x3A8) = zero;
    *(float *)(a0 + 0x3A4) = zero;
    *(float *)(a0 + 0x3A0) = zero;
    *(float *)(a0 + 0x410) = zero;
    *(float *)(a0 + 0x40C) = zero;
    *(float *)(a0 + 0x408) = zero;
    *(float *)(a0 + 0x454) = zero;
    *(float *)(a0 + 0x450) = zero;
    *(float *)(a0 + 0x44C) = zero;
    *(float *)(a0 + 0x3AC) = one;
    *(float *)(a0 + 0x414) = one;
    *(float *)(a0 + 0x458) = one;
    *(float *)(a0 + 0x3C8) = zero;
    *(float *)(a0 + 0x3C4) = zero;
    *(float *)(a0 + 0x3C0) = zero;
    *(float *)(a0 + 0x430) = zero;
    *(float *)(a0 + 0x42C) = zero;
    *(float *)(a0 + 0x428) = zero;
    *(float *)(a0 + 0x474) = zero;
    *(float *)(a0 + 0x470) = zero;
    *(float *)(a0 + 0x46C) = zero;
    *(int *)(*(int *)(*(int *)(a0 + 0x5B4) + 0x48) + 0xDC) = (int)func_05C6D8;
    *(int *)(*(int *)(*(int *)(a0 + 0x59C) + 0x48) + 0xE4) = (int)a0;
    *(int *)(a0 + 0x36C) = 0;
    func_074128(*(int *)(a0 + 0x59C), 0, 0, 1, 0.125f, zero);
    v = (float *)(a0 + 0x30);
    D_002065D8.p[0] = v[0];
    D_002065D8.p[1] = v[1];
    D_002065D8.p[2] = v[2];
    D_002065D8.p[3] = v[3];
    D_002065D8.f24 = zero;
    D_002065D8.f28 = zero;
    D_002065D8.f2c = *(int *)(a0 + 0x5AC);
    *(float *)(a0 + 0x96C) = D_001C7D90[0];
    *(float *)(a0 + 0x970) = D_001C7D90[1];
    if (D_002065D8.f2c != 0) {
        func_167D50(D_002065D8.f2c);
        func_074128(*(int *)(a0 + 0x5AC), 6, 0, 1, 0.25f, zero);
    }
    if (func_064338(a0) != 0)
        func_0641F8(a0, 0);
    func_035360(0);
    func_0353B8(0);
    func_035610();
    *(int *)(*(int *)(a0 + 0x59C) + 0x64) = *(int *)(*(int *)(a0 + 0x59C) + 0x64) & ~0x20;
    func_073A70(0);
    func_0036F8(10, 3, 3.0f, one);
    func_003728(10, 3, 0.7f, one);
    func_003898(10, 3, 0.3f, one);
    }
    return 1;
}
