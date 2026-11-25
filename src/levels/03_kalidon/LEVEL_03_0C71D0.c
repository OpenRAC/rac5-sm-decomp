/* LEVEL_03:0x0C71D0 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern char D_00219290;

struct Obj {
    char pad00[0x10];
};

extern void func_133A40(struct Obj *p);
extern int func_130878(int id);
extern void func_133A90(struct Obj *p, int v);

void func_0C71D0(struct Obj *o)
{
    func_133A40(o);
    D_00219280 = func_130878(0xA85);
    D_00219284 = func_130878(0x30A);
    D_00219288 = func_130878(0x219);
    D_00219290 = 0;
    func_133A90(o, 0x18);
}
