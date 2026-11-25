/* LEVEL_24:0x0C1D40 -- placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_12B178(struct Obj *p);
extern int func_127FB0(int key);
extern void func_12B1C8(struct S *p, int v);
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern unsigned char D_001D1890;

void func_0C1D40(struct Obj *o)
{
    func_12B178(o);
    D_001D1880 = func_127FB0(0xA87);
    D_001D1884 = func_127FB0(0x327);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 0;
    func_12B1C8((struct S *)o, 0x18);
}
