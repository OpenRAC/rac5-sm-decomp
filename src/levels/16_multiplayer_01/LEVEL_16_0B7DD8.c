/* LEVEL_16:0x0B7DD8 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001A1AB4;
extern void func_111D48(Obj *p);
extern void func_10FD98(int a);
extern int func_1102B8(void *);
void func_0B7DD8(Obj *o)
{
    func_111D48(o);
    func_10FD98(0);
    func_1102B8(*(void **)(D_001A1AB4 + 0x3c));
}
