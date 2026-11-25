/* LEVEL_08:0x0D4090 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_0023CB2C;
extern void func_146BB0(Obj *p);
extern void func_144548(int a);
extern int func_144A88(void *);
void func_0D4090(Obj *o)
{
    func_146BB0(o);
    func_144548(0);
    func_144A88(*(void **)(D_0023CB2C + 0x3c));
}
