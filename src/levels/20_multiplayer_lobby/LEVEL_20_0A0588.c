/* LEVEL_20:0x0A0588 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern char D_00111368;

struct Obj {
    char pad00[0x10];
};

extern void func_0E4B30(struct Obj *p);
extern int func_0E2118(int id);
extern void func_0E4B80(struct Obj *p, int v);

void func_0A0588(struct Obj *o)
{
    func_0E4B30(o);
    D_00111358 = func_0E2118(0xA85);
    D_0011135C = func_0E2118(0x30A);
    D_00111360 = func_0E2118(0x219);
    D_00111368 = 0;
    func_0E4B80(o, 0x18);
}
