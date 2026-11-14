/* LEVEL_09:0x15D840 -- placement copy of LEVEL_01_16C558.c: fills the sine/cosine table of 20 steps of 2*pi/19, then starts the effect through func_0E8F48 and keeps its result in a global. */
typedef struct SinCos {
    float s;
    float c;
} SinCos;

typedef struct Big {
    char pad0[0x268];
    unsigned int w268;
} Big;

extern SinCos D_0037D3E0[20];
extern Big D_0027F540;
extern int D_001F127C;
extern float sinf(float x);
extern float cosf(float x);
extern void func_0E8F48(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);

void func_15D840(void)
{
    unsigned int i;
    float x;

    x = 0.0f;
    for (i = 0; i < 20; i++) {
        D_0037D3E0[i].s = sinf(x);
        D_0037D3E0[i].c = cosf(x);
        x += 0.33069396f;
    }
    D_001F127C = ((int (*)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))func_0E8F48)(0xB, D_0027F540.w268, 0, 0, 1, 1, 3);
}
