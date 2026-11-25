/* LEVEL_24:0x0C0CB0 -- placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern char D_001D1890;

struct Obj {
    char pad00[0x10];
};

extern void func_12B178(struct Obj *p);
extern int func_127FB0(int id);
extern void func_12B1C8(struct Obj *p, int v);

void func_0C0CB0(struct Obj *o)
{
    func_12B178(o);
    D_001D1880 = func_127FB0(0xA85);
    D_001D1884 = func_127FB0(0x30A);
    D_001D1888 = func_127FB0(0x219);
    D_001D1890 = 0;
    func_12B1C8(o, 0x18);
}
