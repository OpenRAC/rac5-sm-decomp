/* LEVEL_02:0x15DC30 -- fetches the shared handle, nudges the object's position by a global offset vector, refreshes it, then asks func_15DF80 for a further offset and applies that too before the follow-up call. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad00[0x30];
    float pos[3];
} Obj;

extern Vec4 D_0022CDF8;

extern int func_08E8B8(int a);
extern void func_041038(int a);
extern void func_15F1A8(Obj *o);
extern void func_036428(Obj *o);
extern int func_15DF80(Obj *o, Vec4 *v, int h, int z);
extern void func_15F590(Obj *o);

static __inline__ void Add3(float *p, float *v)
{
    p[0] = p[0] + v[0];
    p[1] = p[1] + v[1];
    p[2] = p[2] + v[2];
}

void func_15DC30(Obj *o)
{
    Vec4 v;
    int h;

    h = func_08E8B8(0x10);
    v.x = D_0022CDF8.x;
    v.y = D_0022CDF8.y;
    v.z = D_0022CDF8.z;
    v.w = D_0022CDF8.w;
    Add3(o->pos, &v.x);
    func_041038(0);
    func_15F1A8(o);
    func_036428(o);
    if (func_15DF80(o, &v, h, 0) != 0) {
        Add3(o->pos, &v.x);
        func_15F590(o);
    }
}
