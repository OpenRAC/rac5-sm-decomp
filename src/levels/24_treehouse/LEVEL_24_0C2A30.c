/* LEVEL_24:0x0C2A30 -- placement copy of LEVEL_01_0C9168.c: runs the shared reset step on the object, clears the mode and forwards the global record's word. */
typedef struct Obj Obj;
extern unsigned char *D_001C4C2C;
extern void func_12B178(Obj *p);
extern void func_128B10(int a);
extern int func_129050(void *);
void func_0C2A30(Obj *o)
{
    func_12B178(o);
    func_128B10(0);
    func_129050(*(void **)(D_001C4C2C + 0x3c));
}
