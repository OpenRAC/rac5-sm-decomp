/* LEVEL_21:0x0A7A30 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern char D_00155890;

struct Obj {
    char pad00[0x10];
};

extern void func_0F4540(struct Obj *p);
extern int func_0F1378(int id);
extern void func_0F4590(struct Obj *p, int v);

void func_0A7A30(struct Obj *o)
{
    func_0F4540(o);
    D_00155880 = func_0F1378(0xA85);
    D_00155884 = func_0F1378(0x30A);
    D_00155888 = func_0F1378(0x219);
    D_00155890 = 0;
    func_0F4590(o, 0x18);
}
