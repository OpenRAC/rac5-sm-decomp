/* LEVEL_22:0x0B7618 -- placement copy of LEVEL_24_0C2A30.c: placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_0015332C;
extern void func_10CB48(Obj *p);
extern void func_10A4E0(int a);
extern int func_10AA20(void *);
void func_0B7618(Obj *o)
{
    func_10CB48(o);
    func_10A4E0(0);
    func_10AA20(*(void **)(D_0015332C + 0x3c));
}
