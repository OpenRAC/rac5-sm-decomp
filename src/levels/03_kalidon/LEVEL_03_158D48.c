/* LEVEL_03:0x158D48 -- hands the object and its child to the handler and reports success. */
typedef struct {
    char pad[0x58];
    void *child;
} Obj;

extern void func_1DB060(Obj *o, void *child);

int func_158D48(Obj *o)
{
    func_1DB060(o, o->child);
    return 1;
}
