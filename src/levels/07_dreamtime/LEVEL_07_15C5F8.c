/* LEVEL_07:0x15C5F8 -- placement copy of LEVEL_03_158D48.c: hands the object and its child to the handler and reports success. */
typedef struct {
    char pad[0x58];
    void *child;
} Obj;

extern void func_1D6A20(Obj *o, void *child);

int func_15C5F8(Obj *o)
{
    func_1D6A20(o, o->child);
    return 1;
}
