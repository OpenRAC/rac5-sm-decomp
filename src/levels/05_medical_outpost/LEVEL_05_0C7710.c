/* LEVEL_05:0x0C7710 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001E332C;
extern void func_130FF0(Obj *p);
extern void func_12E988(int a);
extern int func_12EEC8(void *);
void func_0C7710(Obj *o)
{
    func_130FF0(o);
    func_12E988(0);
    func_12EEC8(*(void **)(D_001E332C + 0x3c));
}
