typedef struct {
    float f[3];
} Vec3;

typedef struct {
    char pad00[0x44];
    Vec3 v;
    int w;
    void *a;
    char pad58[8];
    float f0;
    float f1;
    float f2;
    void *b;
} Obj;

extern char D_001DE154[];

void func_11DC18(void *a, void *b, Vec3 *src, void *d, void *e);

void func_0034D0(Vec3 *src, int flag)
{
    (*(Obj **)D_001DE154)->v = *src;
    if (flag) {
        Obj *o = *(Obj **)D_001DE154;
        float *f;

        func_11DC18(&o->a, &o->b, src, &o->b, &o->a);
        f = &o->f0;
        f[0] = src->f[0];
        f[1] = src->f[1];
        f[2] = src->f[2];
        (*(Obj **)D_001DE154)->w = 0;
    }
}
