/* LEVEL_08:0x20ED60 -- placement copy of LEVEL_04_1E7190.c: emits a mode-dependent call, with either the fixed vector or a smoothly scaled copy of it. */
typedef struct {
    float x, y, z;
} V3;
typedef struct {
    char pad0[0x24];
    float amount;
    unsigned char mode;
} Src;
typedef struct {
    char pad0[0xC];
    V3 v;
} Dst;
extern int func_233E00(float x);
extern void func_082E58(Src *s, void *tab, int a, Dst *d, V3 *vec, int c);
extern char D_003EB448[];

static inline void Scale(V3 *out, V3 *in, float k)
{
    out->x = k * in->x;
    out->y = k * in->y;
    out->z = k * in->z;
}

void func_20ED60(Src *s, int a, Dst *d)
{
    V3 vec;
    float k;
    int c;
    if (s->mode == 1) {
        func_082E58(s, D_003EB448, a, d, &d->v, 0xFF);
    } else if (s->mode == 2) {
        k = s->amount;
        c = func_233E00(k * 255.9f);
        k *= -2.0f;
        k += 3.0f;
        Scale(&vec, &d->v, k);
        func_082E58(s, D_003EB448, a, d, &vec, c);
    }
}
