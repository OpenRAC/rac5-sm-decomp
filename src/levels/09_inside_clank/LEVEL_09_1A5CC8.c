/* LEVEL_09:0x1A5CC8 -- placement copy of LEVEL_01_1B2F00.c: runs the global record handler, then the handler for the child's record. */
extern char D_0037FBB8[];
extern void func_0688F0(char *a0);
extern void func_07D5B8(char *record);

typedef struct {
    char pad[0xC];
    char *record;
} Child;

typedef struct {
    char pad[0x58];
    Child *child;
} Obj;

void func_1A5CC8(Obj *o)
{
    func_0688F0(D_0037FBB8);
    func_07D5B8(o->child->record);
}
