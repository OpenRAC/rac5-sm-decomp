/* LEVEL_06:0x1A6F08 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_00384DE0[];
extern void func_068AB0(char *a0);
extern void func_07A718(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1A6F08(Obj *o)
{
    func_068AB0(D_00384DE0);
    func_07A718(o->child->record);
}
