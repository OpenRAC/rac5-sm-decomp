/* LEVEL_04:0x0CE980 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_0020D12C;
extern void func_141AF8(Obj *p);
extern void func_13F490(int a);
extern int func_13F9D0(void *);
void func_0CE980(Obj *o)
{
    func_141AF8(o);
    func_13F490(0);
    func_13F9D0(*(void **)(D_0020D12C + 0x3c));
}
