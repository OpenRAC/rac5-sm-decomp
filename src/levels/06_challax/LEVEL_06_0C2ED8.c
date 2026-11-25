/* LEVEL_06:0x0C2ED8 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern unsigned char D_001EFB10;

struct Obj;
struct S;
extern void func_12BD48(struct Obj *p);
extern int func_128B80(int index);
extern void func_12BD98(struct S *p, int v);

void func_0C2ED8(struct Obj *p)
{
    func_12BD48(p);
    D_001EFB00 = func_128B80(0xA86);
    D_001EFB04 = func_128B80(0x327);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 0;
    func_12BD98((struct S *)p, 0x18);
}
