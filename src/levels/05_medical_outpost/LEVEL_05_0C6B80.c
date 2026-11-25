/* LEVEL_05:0x0C6B80 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern unsigned char D_001EFF90;

struct Obj;
struct S;
extern void func_130FF0(struct Obj *p);
extern int func_12DE28(int index);
extern void func_131040(struct S *p, int v);

void func_0C6B80(struct Obj *p)
{
    func_130FF0(p);
    D_001EFF80 = func_12DE28(0xA86);
    D_001EFF84 = func_12DE28(0x327);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 0;
    func_131040((struct S *)p, 0x18);
}
