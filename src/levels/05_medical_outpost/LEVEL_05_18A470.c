/* LEVEL_05:0x18A470 -- runs the handler on the three consecutive 32-byte records of the child block. */
extern void func_094C80(char *record);

typedef struct {
    char pad[0x58];
    char *child;
} Obj;

void func_18A470(Obj *o)
{
    char *c = o->child;

    func_094C80(c);
    func_094C80(c + 0x20);
    func_094C80(c + 0x40);
}
