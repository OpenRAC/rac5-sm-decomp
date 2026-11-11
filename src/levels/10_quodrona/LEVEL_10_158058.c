/* LEVEL_10:0x158058 -- placement copy of LEVEL_03_158D48.c: hands the object and its child to the handler and reports success. */
typedef struct {
    char pad[0x58];
    void *child;
} Obj;

extern void func_1CE6E8(Obj *o, void *child);

int func_158058(Obj *o)
{
    func_1CE6E8(o, o->child);
    return 1;
}
