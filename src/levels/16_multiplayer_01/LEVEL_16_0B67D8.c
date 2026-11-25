/* LEVEL_16:0x0B67D8 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern unsigned char D_001AEC88;

extern void func_111D48(struct Obj *p);
extern int func_10F330(int a0);
extern void func_111D98(struct S *p, int v);

void func_0B67D8(struct Obj *o)
{
    func_111D48(o);
    D_001AEC78 = func_10F330(0xA5E);
    D_001AEC7C = func_10F330(0x30A);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 1;
    func_111D98((struct S *)o, 0x18);
}
