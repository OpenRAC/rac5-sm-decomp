/* LEVEL_10:0x165008 -- sweeps probe vectors around a caster and notifies the objects they hit. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad0[0x14];
    float f14, f18, f1C, f20;
} Aux;

typedef struct Obj Obj;
struct Obj {
    char pad0[0x40];
    struct Cls *cls;
};

struct Cls {
    char pad0[0x20];
    void (*cb)(Obj *o, int a, int b, void *p, void *q, void *r, float f);
};

typedef struct {
    char pad0[0x4C];
    void *f4C;
} Part;

typedef struct {
    char pad0[0x58];
    Part *part;
} Self;

typedef struct {
    float x, y, z;
} Vec3;

extern Aux *D_00210404;
extern Vec4 D_00228F58;
extern Vec4 D_00228F68[6];
extern Vec3 D_00228FC8[3];
extern float D_00228FF0[3];

extern void func_081000(Self *s, Aux *a, int b, int c, int d, int e, int f, int g,
                        float f0, float f1, float f2, float f3);
extern void func_123FF0(Vec4 *out, void *a, Vec4 *t);
extern void func_123D68(Vec4 *out, void *a, Vec3 *t);
extern void func_14EBF0(Self *s, Vec4 *a, Vec4 *b, int c, float f);
extern int func_01BA68(Obj **out, int n, Vec4 *v, int a, int b, int c, int d, float f);

void func_165008(Self *self)
{
    Vec4 a;
    Vec4 b;
    Obj *objs[4];
    Part *part = self->part;
    Aux *aux;
    Vec4 *t;
    int k;
    int j;
    unsigned n;
    unsigned m;

    if (part->f4C) {
        aux = D_00210404;
        if (aux)
            func_081000(self, aux, 0, 0, 0, 0, 0, 1, aux->f14, aux->f18, aux->f1C, aux->f20);
        func_123FF0(&a, part->f4C, &D_00228F58);
        t = D_00228F68;
        for (k = 5; k >= 0; k--) {
            func_123FF0(&b, part->f4C, t);
            t++;
            func_14EBF0(self, &a, &b, 0, 4.0f);
        }
        for (j = 0; j < 3; j++) {
            func_123D68(&b, part->f4C, &D_00228FC8[j]);
            n = func_01BA68(objs, 4, &b, 0x129, 0x101, 0xAE3E, 1, D_00228FF0[j]);
            for (m = 0; m < n; m++) {
                if (objs[m]->cls->cb)
                    objs[m]->cls->cb(objs[m], 1, 2, (char *)self + 0x30, (char *)self + 0x20,
                                     self, 60.0f);
            }
        }
    }
}
