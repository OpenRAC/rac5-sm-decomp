/* LEVEL_19:0x16D428 -- placement copy of LEVEL_01_19D068.c: picks a random free direction for a bouncing object, up to ten tries. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct P {
    char pad0[4];
    float f4;
    float f8;
    float fC;
    int f10;
    char pad14[0xC];
    float f20;
} P;

typedef struct Obj {
    char pad0[0x30];
    V3 pos;
    char pad3C[0x45 - 0x3C];
    unsigned char f45;
    char pad46[0x54 - 0x46];
    P *f54;
    char pad58[0x70 - 0x58];
    int f70;
} Obj;

extern V3 D_001D7928;
extern int rand(void);
extern int func_01F390(float *a, float *b, float *c, V3 *d, float *e, V3 *f, int g, int h, float x, float y);

void func_16D428(Obj *o)
{
    float t[4];
    float u[4];
    float w[4];
    V3 dir;
    float v[4];
    P *p;
    int i;
    int mod;
    float two;
    float three;
    float k;
    float half;
    float thr;

    mod = 2;
    i = 0;
    p = o->f54;
    two = 2.0f;
    three = 3.0f;
    p->f20 = 0.0f;
    k = 4.656612873077393e-10f;
    half = 0.5f;
    thr = 0.699999988079071f;
    do {
        p->f8 = (float)rand() * k * three + two;
        p->f4 = (float)rand() * k * half + half;
        p->fC = (float)rand() * k * half + half;
        if (rand() % mod) {
            p->f4 = -p->f4;
        }
        if (rand() % mod) {
            p->fC = -p->fC;
        }
        p->f10 = 0;
        dir = D_001D7928;
        if (func_01F390(v, t, u, &o->pos, &p->f4, &dir, 0x4028, 0x4000, 0.0f, two)) {
            if (thr <= u[1]) {
                p->f20 = o->pos.y - t[1];
                break;
            }
        }
        i++;
    } while (i < 10);
    o->f70 = 0;
    o->f45 = 1;
}
