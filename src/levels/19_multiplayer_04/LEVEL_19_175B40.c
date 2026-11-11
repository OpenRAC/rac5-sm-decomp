/* LEVEL_19:0x175B40 -- placement copy of LEVEL_01_1B3750.c: passes the record pointer held by the child object to the handler. */
extern void func_0737C8(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_175B40(Obj *o)
{
    func_0737C8(o->child->record);
}
