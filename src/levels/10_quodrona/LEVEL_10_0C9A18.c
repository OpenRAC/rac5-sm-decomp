/* LEVEL_10:0x0C9A18 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern unsigned char D_00209C10;

struct Obj;
struct S;
extern void func_1334F8(struct Obj *p);
extern int func_130310(int index);
extern void func_133548(struct S *p, int v);

void func_0C9A18(struct Obj *p)
{
    func_1334F8(p);
    D_00209C00 = func_130310(0xA86);
    D_00209C04 = func_130310(0x327);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 0;
    func_133548((struct S *)p, 0x18);
}
