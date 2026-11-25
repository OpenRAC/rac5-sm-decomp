/* LEVEL_23:0x0BF378 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern unsigned char D_001D4010;

struct Obj;
struct S;
extern void func_126DF0(struct Obj *p);
extern int func_123C28(int index);
extern void func_126E40(struct S *p, int v);

void func_0BF378(struct Obj *p)
{
    func_126DF0(p);
    D_001D4000 = func_123C28(0xA86);
    D_001D4004 = func_123C28(0x327);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 0;
    func_126E40((struct S *)p, 0x18);
}
