/* LEVEL_04:0x0CDDF0 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern unsigned char D_0021A0D0;

struct Obj;
struct S;
extern void func_141AF8(struct Obj *p);
extern int func_13E930(int index);
extern void func_141B48(struct S *p, int v);

void func_0CDDF0(struct Obj *p)
{
    func_141AF8(p);
    D_0021A0C0 = func_13E930(0xA86);
    D_0021A0C4 = func_13E930(0x327);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 0;
    func_141B48((struct S *)p, 0x18);
}
