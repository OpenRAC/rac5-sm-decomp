/* LEVEL_22:0x0B5898 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern char D_0015FF90;

struct Obj {
    char pad00[0x10];
};

extern void func_10CB48(struct Obj *p);
extern int func_109980(int id);
extern void func_10CB98(struct Obj *p, int v);

void func_0B5898(struct Obj *o)
{
    func_10CB48(o);
    D_0015FF80 = func_109980(0xA85);
    D_0015FF84 = func_109980(0x30A);
    D_0015FF88 = func_109980(0x219);
    D_0015FF90 = 0;
    func_10CB98(o, 0x18);
}
