/* LEVEL_02:0x1D31E8 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_003B02B8[];
extern void func_071170(char *a0);
extern void func_087408(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1D31E8(Obj *o)
{
    func_071170(D_003B02B8);
    func_087408(o->child->record);
}
