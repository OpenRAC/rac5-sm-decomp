/* LEVEL_03:0x1C7FF0 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_003B3490[];
extern void func_06A678(char *a0);
extern void func_080918(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1C7FF0(Obj *o)
{
    func_06A678(D_003B3490);
    func_080918(o->child->record);
}
