/* LEVEL_24:0x0C1DF0 -- placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern char D_001D1890;

struct Obj;
extern void func_12B178(struct Obj *p);
extern int func_127FB0(int id);
extern void func_12B1C8(struct Obj *p, int v);

void func_0C1DF0(struct Obj *o)
{
    func_12B178(o);
    D_001D1880 = func_127FB0(0xA8A);
    D_001D1884 = func_127FB0(0x327);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 0;
    func_12B1C8(o, 0x18);
}
