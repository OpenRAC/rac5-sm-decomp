/* LEVEL_10:0x163B50 -- placement copy of LEVEL_01_16C558.c: fills the sine/cosine table of 20 steps of 2*pi/19, then starts the effect through func_0EC9A8 and keeps its result in a global. */
typedef struct SinCos {
    float s;
    float c;
} SinCos;

typedef struct Big {
    char pad0[0x268];
    unsigned int w268;
} Big;

extern SinCos D_0039F030[20];
extern Big D_002A11C0;
extern int D_002103FC;
extern float sinf(float x);
extern float cosf(float x);
extern int func_0EC9A8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);

void func_163B50(void)
{
    unsigned int i;
    float x;

    x = 0.0f;
    for (i = 0; i < 20; i++) {
        D_0039F030[i].s = sinf(x);
        D_0039F030[i].c = cosf(x);
        x += 0.33069396f;
    }
    D_002103FC = ((int (*)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))func_0EC9A8)(0xB, D_002A11C0.w268, 0, 0, 1, 1, 3);
}
