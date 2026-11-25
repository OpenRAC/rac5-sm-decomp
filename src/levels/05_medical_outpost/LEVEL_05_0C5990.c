/* LEVEL_05:0x0C5990 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern char D_001EFF90;

struct Obj {
    char pad00[0x10];
};

extern void func_130FF0(struct Obj *p);
extern int func_12DE28(int id);
extern void func_131040(struct Obj *p, int v);

void func_0C5990(struct Obj *o)
{
    func_130FF0(o);
    D_001EFF80 = func_12DE28(0xA85);
    D_001EFF84 = func_12DE28(0x30A);
    D_001EFF88 = func_12DE28(0x219);
    D_001EFF90 = 0;
    func_131040(o, 0x18);
}
