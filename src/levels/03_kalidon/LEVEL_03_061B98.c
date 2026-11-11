/* LEVEL_03:0x061B98 -- placement copy of LEVEL_01_063210.c: resets an object's three transform blocks and the shared state, then fires the intro effects. */
typedef struct {
    float p[4];
    char pad10[0x10];
    int mode;
    float f24;
    float f28;
    int f2c;
} G;

extern G D_00253FD8;
extern float D_0020D010[];
extern void func_0CA7A0(int a);
extern void func_189218(int a);
extern void func_0618A8(void);
extern void func_07CB08(int a, int b, int c, int d, float e, float f);
extern void func_17BFA0(int a);
extern int func_069508(void *a);
extern void func_0693C8(void *a, int b);
extern void func_03A180(int a);
extern void func_03A1D8(int a);
extern void func_03A430(void);
extern void func_07C448(int a);
extern void func_003720(int a, int b, float c, float d);
extern void func_003750(int a, int b, float c, float d);
extern void func_0038C0(int a, int b, float c, float d);

int func_061B98(char *a0)
{
    char *a1;
    int x;
    float *v;

    func_0CA7A0(-1);
    D_00253FD8.mode = -1;

    a1 = a0 + 0xFD0;
    *(short *)(a0 + 0x108) = 0;
    *(int *)(a1 + 0x10) = *(int *)(a0 + 0x5B4);
    *(char *)(a1 + 0xE) = 2;
    x = *(int *)(*(int *)(*(int *)(a0 + 0x5B4) + 0x54));
    if (x != 0)
        func_189218(x);
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
    *(int *)(*(int *)(*(int *)(a0 + 0x5B4) + 0x48) + 0xDC) = (int)func_0618A8;
    *(int *)(*(int *)(*(int *)(a0 + 0x59C) + 0x48) + 0xE4) = (int)a0;
    *(int *)(a0 + 0x36C) = 0;
    func_07CB08(*(int *)(a0 + 0x59C), 0, 0, 1, 0.125f, zero);
    v = (float *)(a0 + 0x30);
    D_00253FD8.p[0] = v[0];
    D_00253FD8.p[1] = v[1];
    D_00253FD8.p[2] = v[2];
    D_00253FD8.p[3] = v[3];
    D_00253FD8.f24 = zero;
    D_00253FD8.f28 = zero;
    D_00253FD8.f2c = *(int *)(a0 + 0x5AC);
    *(float *)(a0 + 0x96C) = D_0020D010[0];
    *(float *)(a0 + 0x970) = D_0020D010[1];
    if (D_00253FD8.f2c != 0) {
        func_17BFA0(D_00253FD8.f2c);
        func_07CB08(*(int *)(a0 + 0x5AC), 6, 0, 1, 0.25f, zero);
    }
    if (func_069508(a0) != 0)
        func_0693C8(a0, 0);
    func_03A180(0);
    func_03A1D8(0);
    func_03A430();
    *(int *)(*(int *)(a0 + 0x59C) + 0x64) = *(int *)(*(int *)(a0 + 0x59C) + 0x64) & ~0x20;
    func_07C448(0);
    func_003720(10, 3, 3.0f, one);
    func_003750(10, 3, 0.7f, one);
    func_0038C0(10, 3, 0.3f, one);
    }
    return 1;
}
