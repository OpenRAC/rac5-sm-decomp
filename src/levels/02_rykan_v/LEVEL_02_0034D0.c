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

extern char D_00203ED4[];

void func_12DB00(void *a, void *b, Vec3 *src, void *d, void *e);

void func_0034D0(Vec3 *src, int flag)
{
    (*(Obj **)D_00203ED4)->v = *src;
    if (flag) {
        Obj *o = *(Obj **)D_00203ED4;
        float *f;

        func_12DB00(&o->a, &o->b, src, &o->b, &o->a);
        f = &o->f0;
        f[0] = src->f[0];
        f[1] = src->f[1];
        f[2] = src->f[2];
        (*(Obj **)D_00203ED4)->w = 0;
    }
}
