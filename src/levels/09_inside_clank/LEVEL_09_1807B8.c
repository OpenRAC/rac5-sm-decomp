/* LEVEL_09:0x1807B8 -- fills the sine/cosine table of 20 steps of pi/20 starting at -pi/2, starts the effect through func_0E8F48 and keeps its result, then looks up a second record and sets its two size fields. */
typedef struct SinCos {
    float s;
    float c;
} SinCos;

typedef struct Big {
    char pad0[0xD4];
    unsigned int wD4;
} Big;

typedef struct Rec {
    char pad00[0x18];
    float f18;
    float f1C;
} Rec;

extern SinCos D_0037E2E8[20];
extern Big D_0027F540;
extern int D_001F2504;
extern Rec *D_001F2508;
extern float sinf(float x);
extern float cosf(float x);
extern int func_0E8F48(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern Rec *func_123000(unsigned int key);

void func_1807B8(void)
{
    unsigned int i;
    float x;
    Rec **pp;

    x = -1.5707963705062866f;
    for (i = 0; i < 20; i++) {
        D_0037E2E8[i].s = sinf(x);
        D_0037E2E8[i].c = cosf(x);
        x += 0.15707963705062866f;
    }
    D_001F2504 = func_0E8F48(0xB, D_0027F540.wD4, 0, 0, 1, 1, 3);
    pp = &D_001F2508;
    *pp = func_123000(0x106152E5);
    if (*pp != 0) {
        (*pp)->f1C = 80.0f;
        (*pp)->f18 = 40.0f;
    }
}
