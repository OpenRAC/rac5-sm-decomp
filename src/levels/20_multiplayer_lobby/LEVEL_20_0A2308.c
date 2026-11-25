/* LEVEL_20:0x0A2308 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_00104194;
extern void func_0E4B30(Obj *p);
extern void func_0E2B80(int a);
extern int func_0E30A0(void *);
void func_0A2308(Obj *o)
{
    func_0E4B30(o);
    func_0E2B80(0);
    func_0E30A0(*(void **)(D_00104194 + 0x3c));
}
