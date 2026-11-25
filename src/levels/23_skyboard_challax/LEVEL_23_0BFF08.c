/* LEVEL_23:0x0BFF08 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001C73AC;
extern void func_126DF0(Obj *p);
extern void func_124788(int a);
extern int func_124CC8(void *);
void func_0BFF08(Obj *o)
{
    func_126DF0(o);
    func_124788(0);
    func_124CC8(*(void **)(D_001C73AC + 0x3c));
}
