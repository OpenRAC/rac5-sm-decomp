typedef struct {
    char pad[8];
    float f8;
    char pad2[0x14];
} Rec;

typedef struct {
    char pad[8];
    Rec *f08;
    char pad2[0x29];
    unsigned char f35;
} Sub;

typedef struct {
    int *f00;
    Sub *f04;
    float f08;
    char pad[0x18];
    unsigned char f24;
} Obj;

extern int D_0014AF0C;
extern int D_00180000[];

void func_06DB48(Obj *o, void (*cb)(Rec *, void *), void *arg)
{
    Sub *s = o->f04;
    Rec *arr;
    unsigned n;

    if (s == 0)
        return;
    if (s->f35 == 0)
        return;
    n = s->f35;
    arr = s->f08;
    D_00180000[0x1C2D] = o->f00[D_0014AF0C];
    while (o->f24 < n && arr[o->f24].f8 < o->f08) {
        if (cb != 0)
            cb(&arr[o->f24], arg);
        o->f24++;
    }
    while (o->f24 != 0 && o->f08 < arr[o->f24 - 1].f8) {
        o->f24--;
        if (cb != 0)
            cb(&arr[o->f24], arg);
    }
}
