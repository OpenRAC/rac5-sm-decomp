/* LEVEL_07:0x1CAF98 -- placement copy of LEVEL_01_1B3750.c: passes the record pointer held by the child object to the handler. */
extern void func_082CA0(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1CAF98(Obj *o)
{
    func_082CA0(o->child->record);
}
