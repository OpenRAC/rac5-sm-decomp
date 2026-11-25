/* LEVEL_20:0x0A1778 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern unsigned char D_00111368;

struct Obj;
struct S;
extern void func_0E4B30(struct Obj *p);
extern int func_0E2118(int index);
extern void func_0E4B80(struct S *p, int v);

void func_0A1778(struct Obj *p)
{
    func_0E4B30(p);
    D_00111358 = func_0E2118(0xA86);
    D_0011135C = func_0E2118(0x327);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 0;
    func_0E4B80((struct S *)p, 0x18);
}
