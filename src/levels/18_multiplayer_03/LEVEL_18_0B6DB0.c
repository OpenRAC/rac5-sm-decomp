/* LEVEL_18:0x0B6DB0 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001A2F34;
extern void func_1109F8(Obj *p);
extern void func_10EA48(int a);
extern int func_10EF68(void *);
void func_0B6DB0(Obj *o)
{
    func_1109F8(o);
    func_10EA48(0);
    func_10EF68(*(void **)(D_001A2F34 + 0x3c));
}
