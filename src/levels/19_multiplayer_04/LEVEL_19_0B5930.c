/* LEVEL_19:0x0B5930 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern char D_001AFE08;

struct Obj {
    char pad00[0x10];
};

extern void func_1123E8(struct Obj *p);
extern int func_10F9D0(int id);
extern void func_112438(struct Obj *p, int v);

void func_0B5930(struct Obj *o)
{
    func_1123E8(o);
    D_001AFDF8 = func_10F9D0(0xA85);
    D_001AFDFC = func_10F9D0(0x30A);
    D_001AFE00 = func_10F9D0(0x219);
    D_001AFE08 = 0;
    func_112438(o, 0x18);
}
