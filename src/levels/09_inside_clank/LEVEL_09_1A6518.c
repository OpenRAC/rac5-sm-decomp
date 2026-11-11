/* LEVEL_09:0x1A6518 -- placement copy of LEVEL_01_1B3750.c: passes the record pointer held by the child object to the handler. */
extern void func_07D5B8(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1A6518(Obj *o)
{
    func_07D5B8(o->child->record);
}
