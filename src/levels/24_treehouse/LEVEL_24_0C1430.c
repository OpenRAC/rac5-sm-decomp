/* LEVEL_24:0x0C1430 -- placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern unsigned char D_001D1890;

extern void func_12B178(struct Obj *p);
extern int func_127FB0(int a0);
extern void func_12B1C8(struct S *p, int v);

void func_0C1430(struct Obj *o)
{
    func_12B178(o);
    D_001D1880 = func_127FB0(0xA5E);
    D_001D1884 = func_127FB0(0x30A);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 1;
    func_12B1C8((struct S *)o, 0x18);
}
