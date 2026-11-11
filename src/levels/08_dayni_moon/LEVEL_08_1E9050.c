/* LEVEL_08:0x1E9050 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_003EA7C8[];
extern void func_071538(char *a0);
extern void func_088AA8(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1E9050(Obj *o)
{
    func_071538(D_003EA7C8);
    func_088AA8(o->child->record);
}
