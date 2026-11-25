/* LEVEL_01:0x0C73E8 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern char D_00200C10;

struct Obj {
    char pad00[0x10];
};

extern void func_135678(struct Obj *p);
extern int func_1324B0(int id);
extern void func_1356C8(struct Obj *p, int v);

void func_0C73E8(struct Obj *o)
{
    func_135678(o);
    D_00200C00 = func_1324B0(0xA85);
    D_00200C04 = func_1324B0(0x30A);
    D_00200C08 = func_1324B0(0x219);
    D_00200C10 = 0;
    func_1356C8(o, 0x18);
}
