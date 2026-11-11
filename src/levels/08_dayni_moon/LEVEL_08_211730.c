/* LEVEL_08:0x211730 -- placement copy of LEVEL_03_1E23D8.c: derives a step angle from a count, stores its cosine and signed sine, then the same pair for a stored angle. */

typedef struct {
    char pad_00[4];
    int n_04;
    float ang_08;
    char pad_0C[0x10];
    int idx_1C;
    unsigned int bits_20;
    float s1_24;
    float c1_28;
    float c2_2C;
    float s2_30;
} Obj;

extern unsigned int D_002E7040[];
extern float cosf(float x);
extern float sqrtf(float x);

void func_211730(Obj *o)
{
    float a;
    float c;
    float s;

    a = 6.2831854820251465f / (float)o->n_04;
    o->bits_20 = (o->bits_20 & 0xF800FFFF) | (D_002E7040[o->idx_1C] << 16);
    c = cosf(a);
    s = sqrtf(1.0f - c * c);
    if (a < 0.0f) {
        s = -s;
    }
    o->s1_24 = s;
    o->c1_28 = c;
    a = o->ang_08;
    c = cosf(a);
    s = sqrtf(1.0f - c * c);
    if (a < 0.0f) {
        s = -s;
    }
    o->c2_2C = c;
    o->s2_30 = s;
}
