/* LEVEL_08:0x1E98D0 -- placement copy of LEVEL_01_1B3750.c: passes the record pointer held by the child object to the handler. */
extern void func_088AA8(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1E98D0(Obj *o)
{
    func_088AA8(o->child->record);
}
