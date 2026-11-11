/* LEVEL_23:0x196C48 -- placement copy of LEVEL_01_1B3750.c: passes the record pointer held by the child object to the handler. */
extern void func_077F38(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_196C48(Obj *o)
{
    func_077F38(o->child->record);
}
