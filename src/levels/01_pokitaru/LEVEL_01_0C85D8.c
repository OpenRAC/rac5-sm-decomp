/* LEVEL_01:0x0C85D8 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned char D_00200C10;

struct Obj;
struct S;
extern void func_135678(struct Obj *p);
extern int func_1324B0(int index);
extern void func_1356C8(struct S *p, int v);

void func_0C85D8(struct Obj *p)
{
    func_135678(p);
    D_00200C00 = func_1324B0(0xA86);
    D_00200C04 = func_1324B0(0x327);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 0;
    func_1356C8((struct S *)p, 0x18);
}
