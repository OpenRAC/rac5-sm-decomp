/* LEVEL_08:0x1FD618 -- placement copy of LEVEL_04_1D8698.c: hands the child's record to the handler when one is set. */
extern void func_088AA8(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1FD618(Obj *o)
{
    char *record = o->child->record;

    if (record != 0)
        func_088AA8(record);
}
