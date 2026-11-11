typedef struct {
    float v0;
    float v1;
    float v2;
    float v3;
} Vec4;

typedef struct {
    char  pad[0x40];
    void *f40;
} A;

typedef struct {
    char  pad[0x24];
    int   f24;
} B;

typedef struct {
    char  pad[0x48];
    char *f48;
} C;

typedef struct {
    char   pad0[0x304];
    Vec4   v304;
    char   pad1[0x5A4 - 0x314];
    A     *f5A4;
} Obj;

extern Vec4 D_00217E88;
extern void func_17CAD0(void *);

void func_066128(Obj *o)
{
    Vec4 *d = &o->v304;

    d->v0 = D_00217E88.v0;
    d->v1 = D_00217E88.v1;
    d->v2 = D_00217E88.v2;
    d->v3 = D_00217E88.v3;
    if (o->f5A4 != 0 && ((B *)((A *)o->f5A4)->f40)->f24 == 0x4B6F098C) {
        func_17CAD0(o->f5A4);
        *(int *)(((C *)o->f5A4)->f48 + 0xDC) = 0;
    }
}
