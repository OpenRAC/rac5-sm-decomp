/* LEVEL_08:0x1C31D8 -- runs the handler on the two sub-records at +0x24 and +0x40 of the child block. */
extern void func_09F668(char *record);

typedef struct {
    char pad[0x58];
    char *child;
} Obj;

void func_1C31D8(Obj *o)
{
    char *c = o->child;

    func_09F668(c + 0x24);
    func_09F668(c + 0x40);
}
