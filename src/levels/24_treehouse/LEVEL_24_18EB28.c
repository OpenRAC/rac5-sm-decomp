/* LEVEL_24:0x18EB28 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_00361FA8[];
extern void func_065330(char *a0);
extern void func_07B218(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_18EB28(Obj *o)
{
    func_065330(D_00361FA8);
    func_07B218(o->child->record);
}
