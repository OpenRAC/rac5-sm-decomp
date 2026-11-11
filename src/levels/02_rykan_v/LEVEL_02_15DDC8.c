/* LEVEL_02:0x15DDC8 -- starts an object's activation sequence and chooses its follow-up state. */
typedef struct Ext { int active; char pad0[0xAA]; unsigned char flag; } Ext;
typedef struct Obj { char pad0[0x58]; Ext *ext; } Obj;
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_0022CDF8;
extern float D_00222A2C;
extern int func_08E8B8(int n);
extern void func_041038(void *value);
extern void func_036428(Obj *o);
extern void func_15DF80(Obj *o, Vec4 *v, int h, int n);
extern void func_15F1A8(Obj *o);
extern int func_0833A0(Obj *o, int n);
extern void func_15D640(Obj *o, int n);
extern float func_083378(Obj *o);
extern void func_15EEF8(Obj *o);

void func_15DDC8(Obj *o)
{
    Vec4 v;
    int h;
    Ext *e;
    v.x = D_0022CDF8.x;
    v.y = D_0022CDF8.y;
    v.z = D_0022CDF8.z;
    v.w = D_0022CDF8.w;
    h = func_08E8B8(16);
    e = o->ext;
    func_041038(0);
    if (e->active != 0)
        o->ext->flag = 1;
    func_036428(o);
    func_15DF80(o, &v, h, 1);
    func_15F1A8(o);
    if (func_0833A0(o, 0) != 0) {
        func_15D640(o, 2);
    } else if (e->active != 0) {
        if (func_083378(o) >= D_00222A2C)
            func_15EEF8(o);
    }
}
