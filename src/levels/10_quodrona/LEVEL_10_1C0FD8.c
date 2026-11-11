/* LEVEL_10:0x1C0FD8 -- placement copy of LEVEL_01_1B3750.c: passes the record pointer held by the child object to the handler. */
extern void func_081168(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1C0FD8(Obj *o)
{
    func_081168(o->child->record);
}
