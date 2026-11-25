/* LEVEL_09:0x0C6418 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001DDDAC;
extern void func_12E610(Obj *p);
extern void func_12BFA8(int a);
extern int func_12C4E8(void *);
void func_0C6418(Obj *o)
{
    func_12E610(o);
    func_12BFA8(0);
    func_12C4E8(*(void **)(D_001DDDAC + 0x3c));
}
