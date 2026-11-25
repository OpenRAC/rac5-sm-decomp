/* LEVEL_07:0x0CB1C8 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_002082AC;
extern void func_138678(Obj *p);
extern void func_136010(int a);
extern int func_136550(void *);
void func_0CB1C8(Obj *o)
{
    func_138678(o);
    func_136010(0);
    func_136550(*(void **)(D_002082AC + 0x3c));
}
