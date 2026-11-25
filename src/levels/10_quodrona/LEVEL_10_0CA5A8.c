/* LEVEL_10:0x0CA5A8 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001FCFAC;
extern void func_1334F8(Obj *p);
extern void func_130E70(int a);
extern int func_1313D0(void *);
void func_0CA5A8(Obj *o)
{
    func_1334F8(o);
    func_130E70(0);
    func_1313D0(*(void **)(D_001FCFAC + 0x3c));
}
