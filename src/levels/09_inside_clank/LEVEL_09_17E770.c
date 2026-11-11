/* LEVEL_09:0x17E770 -- hands the child's record to the handler when one is set. */
extern void func_07D5B8(char *record);

typedef struct {
    char pad[4];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_17E770(Obj *o)
{
    char *record = o->child->record;

    if (record != 0)
        func_07D5B8(record);
}
