/* LEVEL_04:0x1E7190 -- emits a mode-dependent call, with either the fixed vector or a smoothly scaled copy of it. */
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
extern int func_204438(float x);
extern void func_07E2D8(Src *s, void *tab, int a, Dst *d, V3 *vec, int c);
extern char D_003B3EF0[];

static inline void Scale(V3 *out, V3 *in, float k)
{
    out->x = k * in->x;
    out->y = k * in->y;
    out->z = k * in->z;
}

void func_1E7190(Src *s, int a, Dst *d)
{
    V3 vec;
    float k;
    int c;
    if (s->mode == 1) {
        func_07E2D8(s, D_003B3EF0, a, d, &d->v, 0xFF);
    } else if (s->mode == 2) {
        k = s->amount;
        c = func_204438(k * 255.9f);
        k *= -2.0f;
        k += 3.0f;
        Scale(&vec, &d->v, k);
        func_07E2D8(s, D_003B3EF0, a, d, &vec, c);
    }
}
