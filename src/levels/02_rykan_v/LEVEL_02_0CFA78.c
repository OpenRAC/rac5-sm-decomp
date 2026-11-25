/* LEVEL_02:0x0CFA78 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_00208C2C;
extern void func_13BA28(Obj *p);
extern void func_1393C0(int a);
extern int func_139900(void *);
void func_0CFA78(Obj *o)
{
    func_13BA28(o);
    func_1393C0(0);
    func_139900(*(void **)(D_00208C2C + 0x3c));
}
