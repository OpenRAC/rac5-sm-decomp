/* LEVEL_19:0x0B6B20 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern unsigned char D_001AFE08;

struct Obj;
struct S;
extern void func_1123E8(struct Obj *p);
extern int func_10F9D0(int index);
extern void func_112438(struct S *p, int v);

void func_0B6B20(struct Obj *p)
{
    func_1123E8(p);
    D_001AFDF8 = func_10F9D0(0xA86);
    D_001AFDFC = func_10F9D0(0x327);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 0;
    func_112438((struct S *)p, 0x18);
}
