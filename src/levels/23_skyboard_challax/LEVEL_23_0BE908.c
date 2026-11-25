/* LEVEL_23:0x0BE908 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern unsigned char D_001D4010;

extern void func_126DF0(struct Obj *p);
extern int func_123C28(int a0);
extern void func_126E40(struct S *p, int v);

void func_0BE908(struct Obj *o)
{
    func_126DF0(o);
    D_001D4000 = func_123C28(0xA5E);
    D_001D4004 = func_123C28(0x30A);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 1;
    func_126E40((struct S *)o, 0x18);
}
