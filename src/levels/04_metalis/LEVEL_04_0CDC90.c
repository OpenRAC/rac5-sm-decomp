/* LEVEL_04:0x0CDC90 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_141AF8(struct Obj *p);
extern int func_13E930(int key);
extern void func_141B48(struct S *p, int v);
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern unsigned char D_0021A0D0;

void func_0CDC90(struct Obj *o)
{
    func_141AF8(o);
    D_0021A0C0 = func_13E930(0xA87);
    D_0021A0C4 = func_13E930(0x327);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 0;
    func_141B48((struct S *)o, 0x18);
}
