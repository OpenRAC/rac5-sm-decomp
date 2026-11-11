/* LEVEL_10:0x1C0788 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_003A1AA0[];
extern void func_06AF08(char *a0);
extern void func_081168(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1C0788(Obj *o)
{
    func_06AF08(D_003A1AA0);
    func_081168(o->child->record);
}
