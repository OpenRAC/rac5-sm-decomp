/* LEVEL_09:0x17DC38 -- placement copy of LEVEL_06_17DC20.c: turns on the marked slots of the near or far list of an object depending on which side of it the viewer stands. */

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} Dst;

typedef struct Aux {
    char pad_00[8];
    int link;
    char pad_0C[0x1D];
    unsigned char near_list[8];
    unsigned char far_list[8];
} Aux;

typedef struct Obj {
    char pad_00[0x20];
    float dir[3];
    float pad_2C;
    float pos[3];
    char pad_3C[0x18];
    Aux *aux;
} Obj;

extern float sqrtf(float x);
extern int func_018AE0(void);
extern int func_0810E8(int a, int b);
extern void func_019710(Dst *a0);
extern void func_017720(int a0, int a1);

static __inline__ void Sub(float *o, float *a, float *b)
{
    o[0] = a[0] - b[0];
    o[1] = a[1] - b[1];
    o[2] = a[2] - b[2];
}

static __inline__ float Dot(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ void Scale(float *v, float s)
{
    v[0] = v[0] * s;
    v[1] = v[1] * s;
    v[2] = v[2] * s;
}

void func_17DC38(Obj *o)
{
    Dst v;
    float d[3];
    float len2;
    Aux *aux;
    int lookup;
    unsigned char *list;
    unsigned int i;

    aux = o->aux;
    lookup = func_018AE0();
    if (aux->link == 0 || lookup == 0 || func_0810E8(aux->link, lookup) != 0) {
        func_019710(&v);
        Sub(d, &v.f00, o->pos);
        len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
        if (!(len2 < 2.3841858e-07f))
            Scale(d, 1.0f / sqrtf(len2));
        list = aux->near_list;
        if (Dot(d, o->dir) < 0.0f)
            list = aux->far_list;
        for (i = 0; i < 8; i++) {
            if (list[i] != 0xFF)
                func_017720(list[i], 0);
        }
    }
}
