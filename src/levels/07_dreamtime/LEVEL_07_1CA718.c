/* LEVEL_07:0x1CA718 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_003ADDA0[];
extern void func_06CB70(char *a0);
extern void func_082CA0(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1CA718(Obj *o)
{
    func_06CB70(D_003ADDA0);
    func_082CA0(o->child->record);
}
