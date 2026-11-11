/* LEVEL_01:0x1B3750 -- passes the record pointer held by the child object to the handler. */
extern void func_080B38(char *record);

typedef struct {
    char pad[0x330];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1B3750(Obj *o)
{
    func_080B38(o->child->record);
}
