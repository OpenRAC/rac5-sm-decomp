/* LEVEL_04:0x1BFF00 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_003B3680[];
extern void func_06D8D0(char *a0);
extern void func_083F98(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1BFF00(Obj *o)
{
    func_06D8D0(D_003B3680);
    func_083F98(o->child->record);
}
