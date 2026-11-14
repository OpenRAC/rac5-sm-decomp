/* LEVEL_04:0x1D8698 -- hands the child's record to the handler when one is set. */
extern void func_083F98(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1D8698(Obj *o)
{
    char *record = o->child->record;

    if (record != 0)
        func_083F98(record);
}
