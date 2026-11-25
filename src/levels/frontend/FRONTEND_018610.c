/* FRONTEND:0x018610 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern unsigned char D_00030490;

struct Obj;
struct S;
extern void func_022938(struct Obj *p);
extern int func_01F778(int index);
extern void func_022988(struct S *p, int v);

void func_018610(struct Obj *p)
{
    func_022938(p);
    D_00030480 = func_01F778(0xA86);
    D_00030484 = func_01F778(0x327);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 0;
    func_022988((struct S *)p, 0x18);
}
