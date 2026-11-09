/* LEVEL_08:0x1C9DA0 -- when a1 is -1 and a0 is set, resets a block and fills two parameter tables using powf. */

typedef struct Blk08_1C9DA0 {
    int a_00;
    int b_04;
    int c_08;
    float d_0C;
} Blk08_1C9DA0;

typedef struct TabA08_1C9DA0 {
    float f[14];
} TabA08_1C9DA0;

extern Blk08_1C9DA0 D_003E8AB8;
extern TabA08_1C9DA0 D_003E8AC8;
extern TabA08_1C9DA0 D_003E8B00;
extern float powf(float x, float y);
extern void *memset(void *p, int c, unsigned int n);

void func_1C9DA0(int a0, int a1) {
    TabA08_1C9DA0 a;
    float one;
    TabA08_1C9DA0 *pa;
    TabA08_1C9DA0 *pb;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    pa = &D_003E8AC8;
    pb = &D_003E8B00;
    one = 1.0f;
    D_003E8AB8.a_00 = 0;
    D_003E8AB8.b_04 = 0;
    D_003E8AB8.c_08 = 0;
    D_003E8AB8.d_0C = one;
    memset(&a, 0, 0x38);
    a.f[0] = 0.20000000298023224f;
    a.f[1] = 0.3499999940395355f;
    a.f[2] = 0.029999999329447746f;
    a.f[3] = 0.10000000149011612f;
    a.f[4] = 0.10000000894069672f;
    a.f[5] = 0.11666667461395264f;
    a.f[6] = 0.008888890035450459f;
    a.f[7] = powf(0.949999988079071f, one);
    a.f[8] = powf(0.949999988079071f, one);
    a.f[9] = 0.5f;
    a.f[10] = 0.1745329350233078f;
    a.f[11] = 0.5235987901687622f;
    a.f[12] = 0.06666667014360428f;
    a.f[13] = 0.20000001788139343f;
    *pa = a;
    memset(&a, 0, 0x38);
    a.f[0] = 0.10000000149011612f;
    a.f[1] = 0.20000000298023224f;
    a.f[2] = 0.4000000059604645f;
    a.f[3] = 0.6000000238418579f;
    a.f[4] = 30.0f;
    a.f[5] = 45.0f;
    a.f[6] = 0.03333333507180214f;
    a.f[7] = 0.10000000894069672f;
    a.f[8] = 0.0033333338797092438f;
    a.f[9] = 0.05235988274216652f;
    *(int *)&a.f[10] = 0xFF215C81;
    a.f[11] = powf(0.800000011920929f, one);
    a.f[12] = powf(0.8500000238418579f, one);
    *(char *)&a.f[13] = 1;
    *pb = a;
}
