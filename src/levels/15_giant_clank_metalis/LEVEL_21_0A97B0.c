/* LEVEL_21:0x0A97B0 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_00148C2C;
extern void func_0F4540(Obj *p);
extern void func_0F1ED8(int a);
extern int func_0F2418(void *);
void func_0A97B0(Obj *o)
{
    func_0F4540(o);
    func_0F1ED8(0);
    func_0F2418(*(void **)(D_00148C2C + 0x3c));
}
