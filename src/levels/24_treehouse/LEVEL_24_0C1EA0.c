/* LEVEL_24:0x0C1EA0 -- placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern unsigned char D_001D1890;

struct Obj;
struct S;
extern void func_12B178(struct Obj *p);
extern int func_127FB0(int index);
extern void func_12B1C8(struct S *p, int v);

void func_0C1EA0(struct Obj *p)
{
    func_12B178(p);
    D_001D1880 = func_127FB0(0xA86);
    D_001D1884 = func_127FB0(0x327);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 0;
    func_12B1C8((struct S *)p, 0x18);
}
