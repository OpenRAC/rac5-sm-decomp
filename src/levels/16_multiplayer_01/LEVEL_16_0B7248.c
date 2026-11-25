/* LEVEL_16:0x0B7248 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern unsigned char D_001AEC88;

struct Obj;
struct S;
extern void func_111D48(struct Obj *p);
extern int func_10F330(int index);
extern void func_111D98(struct S *p, int v);

void func_0B7248(struct Obj *p)
{
    func_111D48(p);
    D_001AEC78 = func_10F330(0xA86);
    D_001AEC7C = func_10F330(0x327);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 0;
    func_111D98((struct S *)p, 0x18);
}
