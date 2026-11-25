/* FRONTEND:0x0173E8 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern char D_00030490;

struct Obj {
    char pad00[0x10];
};

extern void func_022938(struct Obj *p);
extern int func_01F778(int id);
extern void func_022988(struct Obj *p, int v);

void func_0173E8(struct Obj *o)
{
    func_022938(o);
    D_00030480 = func_01F778(0xA85);
    D_00030484 = func_01F778(0x30A);
    D_00030488 = func_01F778(0x219);
    D_00030490 = 0;
    func_022988(o, 0x18);
}
