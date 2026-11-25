/* LEVEL_01:0x16C558 -- fills the sine/cosine table of 20 steps of 2*pi/19, then starts the effect through func_0ED068 and keeps its result in a global. */
typedef struct SinCos {
    float s;
    float c;
} SinCos;

typedef struct Big {
    char pad0[0x268];
    unsigned int w268;
} Big;

extern SinCos D_00395D68[20];
extern Big D_00297DC0;
extern int D_002077C4;
extern float sinf(float x);
extern float cosf(float x);
extern int func_0ED068(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);

void func_16C558(void)
{
    unsigned int i;
    float x;

    x = 0.0f;
    for (i = 0; i < 20; i++) {
        D_00395D68[i].s = sinf(x);
        D_00395D68[i].c = cosf(x);
        x += 0.33069396f;
    }
    D_002077C4 = func_0ED068(0xB, D_00297DC0.w268, 0, 0, 1, 1, 3);
}
