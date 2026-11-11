/* LEVEL_01:0x1B2F00 -- runs the global record handler, then the handler for the child's record. */
extern char D_003981B0[];
extern void func_06BCF0(char *a0);
extern void func_080B38(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1B2F00(Obj *o)
{
    func_06BCF0(D_003981B0);
    func_080B38(o->child->record);
}
