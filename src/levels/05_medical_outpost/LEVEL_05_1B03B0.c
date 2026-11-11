/* LEVEL_05:0x1B03B0 -- placement copy of LEVEL_01_1B3750.c: passes the record pointer held by the child object to the handler. */
extern void func_07E1D8(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1B03B0(Obj *o)
{
    func_07E1D8(o->child->record);
}
