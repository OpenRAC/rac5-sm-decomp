/* LEVEL_01:0x0C9168 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001F3FAC;
extern void func_135678(Obj *p);
extern void func_133010(int a);
extern int func_133550(void *);
void func_0C9168(Obj *o)
{
    func_135678(o);
    func_133010(0);
    func_133550(*(void **)(D_001F3FAC + 0x3c));
}
