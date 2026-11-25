/* LEVEL_03:0x0C8F50 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_0020C62C;
extern void func_133A40(Obj *p);
extern void func_1313D8(int a);
extern int func_131918(void *);
void func_0C8F50(Obj *o)
{
    func_133A40(o);
    func_1313D8(0);
    func_131918(*(void **)(D_0020C62C + 0x3c));
}
