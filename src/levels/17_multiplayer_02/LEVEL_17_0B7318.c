/* LEVEL_17:0x0B7318 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001950B4;
extern void func_1112C0(Obj *p);
extern void func_10F310(int a);
extern int func_10F830(void *);
void func_0B7318(Obj *o)
{
    func_1112C0(o);
    func_10F310(0);
    func_10F830(*(void **)(D_001950B4 + 0x3c));
}
