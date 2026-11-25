/* LEVEL_19:0x0B76B0 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001A2C34;
extern void func_1123E8(Obj *p);
extern void func_110438(int a);
extern int func_110958(void *);
void func_0B76B0(Obj *o)
{
    func_1123E8(o);
    func_110438(0);
    func_110958(*(void **)(D_001A2C34 + 0x3c));
}
