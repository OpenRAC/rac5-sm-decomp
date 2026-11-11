/* LEVEL_22:0x137780 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_002E80D0[];
extern void func_061008(char *a0);
extern void func_073510(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_137780(Obj *o)
{
    func_061008(D_002E80D0);
    func_073510(o->child->record);
}
