/* LEVEL_07:0x171398 -- placement copy of LEVEL_01_16C558.c: fills the sine/cosine table of 20 steps of 2*pi/19, then starts the effect through func_0EDE68 and keeps its result in a global. */
typedef struct SinCos {
    float s;
    float c;
} SinCos;

typedef struct Big {
    char pad0[0x268];
    unsigned int w268;
} Big;

extern SinCos D_003AB600[20];
extern Big D_002AD6C0;
extern int D_0021BD04;
extern float sinf(float x);
extern float cosf(float x);
extern int func_0EDE68(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);

void func_171398(void)
{
    unsigned int i;
    float x;

    x = 0.0f;
    for (i = 0; i < 20; i++) {
        D_003AB600[i].s = sinf(x);
        D_003AB600[i].c = cosf(x);
        x += 0.33069396f;
    }
    D_0021BD04 = func_0EDE68(0xB, D_002AD6C0.w268, 0, 0, 1, 1, 3);
}
