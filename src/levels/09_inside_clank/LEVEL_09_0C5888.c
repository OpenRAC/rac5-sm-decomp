/* LEVEL_09:0x0C5888 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern unsigned char D_001EAA10;

struct Obj;
struct S;
extern void func_12E610(struct Obj *p);
extern int func_12B448(int index);
extern void func_12E660(struct S *p, int v);

void func_0C5888(struct Obj *p)
{
    func_12E610(p);
    D_001EAA00 = func_12B448(0xA86);
    D_001EAA04 = func_12B448(0x327);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 0;
    func_12E660((struct S *)p, 0x18);
}
