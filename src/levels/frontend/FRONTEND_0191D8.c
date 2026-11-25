/* FRONTEND:0x0191D8 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_00027E9C;
extern void func_022938(Obj *p);
extern void func_0209E0(int a);
extern int func_020EE0(void *);
void func_0191D8(Obj *o)
{
    func_022938(o);
    func_0209E0(0);
    func_020EE0(*(void **)(D_00027E9C + 0x3c));
}
