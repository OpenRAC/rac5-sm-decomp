/* LEVEL_01:0x18A3D0 -- relocates the resource record of a prop (sixteen part pointers, five effect pointers, three table pointers and two validated record pointers) and, when the sound bank is not loaded, hides the first table's helper flag. */
typedef struct Res {
    int w00[16];
    int w40[5];
    int w54;
    int w58;
    struct Tab *w5C;
    struct Res *w60;
    struct Res *w64;
} Res;

typedef struct Tab {
    char pad_00[0x40];
    int w40;
    char pad_44[0x1D];
    unsigned char b61;
} Tab;

typedef struct Obj {
    char pad_00[0x54];
    Res *res;
} Obj;

extern char *D_00206D94;

extern int func_027408(int a, int b);
extern void func_18A6B8(Res *r);

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = (int)D_00206D94 + *p;
    return 1;
}

static __inline__ int FixTab(Tab **p)
{
    if (*p == 0) {
        return 0;
    }
    *p = (Tab *)(D_00206D94 + (int)*p);
    return 1;
}

static __inline__ int FixRes(Res **p)
{
    int n = (int)*p;
    Res *r;

    if (n == 0) {
        return 0;
    }
    r = (Res *)(D_00206D94 + n);
    if (r->w00[16] == 0) {
        *p = 0;
        return 0;
    }
    *p = r;
    return 1;
}

int func_18A3D0(Obj *o)
{
    Res *res;
    unsigned int i;
    int ok;

    res = o->res;
    for (i = 0; i < 16; i++) {
        ok = Fix(&res->w00[i]);
        if (!ok) {
            return 0;
        }
    }
    for (i = 0; i < 5; i++) {
        ok = Fix(&res->w40[i]);
        if (!ok) {
            return 0;
        }
    }
    ok = Fix(&res->w54);
    if (!ok) {
        return 0;
    }
    ok = Fix(&res->w58);
    if (!ok) {
        return 0;
    }
    ok = FixTab(&res->w5C);
    if (!ok) {
        return 0;
    }
    if (!FixRes(&res->w60)) {
        return 0;
    }
    if (!FixRes(&res->w64)) {
        return 0;
    }
    if (func_027408(1, 0xFF) != 0) {
        func_18A6B8(res);
    } else {
        res->w5C->b61 = res->w5C->b61 & 0xFE;
    }
    return 1;
}
