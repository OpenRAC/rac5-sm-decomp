/* LEVEL_23:0x1963F8 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_003663C8[];
extern void func_065498(char *a0);
extern void func_077F38(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1963F8(Obj *o)
{
    func_065498(D_003663C8);
    func_077F38(o->child->record);
}
