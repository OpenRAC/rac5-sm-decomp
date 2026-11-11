/* LEVEL_02:0x014DA0 -- placement copy of LEVEL_01_014358.c: notifies the objects found around a probe point. */
typedef struct Hit Hit;

typedef struct {
    char pad0[0x20];
    void (*notify)(Hit *self, int kind, float f, int a, float *pos, int b, int c);
} Vtbl;

struct Hit {
    char pad0[0x40];
    Vtbl *vtbl;
};

typedef struct {
    char pad0[0x20];
    float side[3];
    float pad2C;
    float pos[4];
} Obj;

static inline void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

extern int func_01CD48(float h, Hit **out, int max, float *p, int a, int b, int c, int d);
extern void func_014EC0(Obj *o, float a, float b, float c);

void func_014DA0(Obj *o, float a, float b, float c)
{
    Hit *hits[16];
    float p[4];
    int n;
    int i;
    float h;

    h = b * 0.5f;
    Copy4(p, o->pos);
    p[0] = p[0] + o->side[0] * h;
    p[2] = p[2] + o->side[2] * h;
    n = func_01CD48(h, hits, 16, p, 0x69, 1, 0x30, 1);
    for (i = 0; i < n; i++) {
        if (hits[i]->vtbl->notify) {
            hits[i]->vtbl->notify(hits[i], 2, 0.0f, 0, o->pos, 0, 0);
        }
    }
    func_014EC0(o, a, b * b, c);
}
