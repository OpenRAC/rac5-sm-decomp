/* LEVEL_08:0x170980 -- placement copy of LEVEL_03_158D48.c: hands the object and its child to the handler and reports success. */
typedef struct {
    char pad[0x58];
    void *child;
} Obj;

extern void func_205248(Obj *o, void *child);

int func_170980(Obj *o)
{
    func_205248(o, o->child);
    return 1;
}
