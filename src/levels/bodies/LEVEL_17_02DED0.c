/* LEVEL_17:0x02DED0 -- placement copy of LEVEL_01_0307B0.c: steps a clamped spring a number of sub-steps then forwards. */
typedef struct Body {
    char pad[0x1C];
    float pos;
    float vel;
} Body;
typedef struct Spring {
    float k;
    float damp;
    float limit;
    char pad[0xC];
    float target;
} Spring;
extern float D_0018E324;
extern int func_02DFB8(Body *b, int a1, int a2, int a3, float f);

int func_02DED0(Body *b, int a1, Spring *s, int a3, int a4)
{
    int n[2];
    int *p;
    int i;
    float *pos = &b->pos;
    float *vel = &b->vel;
    float target = s->target;
    float k = s->k;
    float damp = s->damp;
    float lim = s->limit;

    n[1] = 2;
    n[0] = (int)(D_0018E324 * 59.998802185058594f);
    p = (n[0] < n[1]) ? &n[0] : &n[1];
    i = *p;
    if (i > 0) do {
        float v = (target - *pos) * k - *vel * damp;
        *vel = v;
        if (lim < v) {
            *vel = lim;
        } else if (v < -lim) {
            *vel = -lim;
        }
        *pos += *vel;
    } while (--i);
    return func_02DFB8(b, a1, a3, a4, b->pos);
}
