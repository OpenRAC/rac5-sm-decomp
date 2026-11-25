/* LEVEL_06:0x0C3A68 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001E2EAC;
extern void func_12BD48(Obj *p);
extern void func_1296E0(int a);
extern int func_129C20(void *);
void func_0C3A68(Obj *o)
{
    func_12BD48(o);
    func_1296E0(0);
    func_129C20(*(void **)(D_001E2EAC + 0x3c));
}
