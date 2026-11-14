/* LEVEL_04:0x15A488 -- placement copy of LEVEL_01_14DD38.c: runs two setup calls with the command's two values, and a third with one of them when the owner's flag bit is set. */
typedef struct {
    int w00;
    int a;
    int b;
} Cmd;

typedef struct {
    char pad00[0xA4];
    unsigned int flags;
} Owner;

typedef struct {
    char pad00[0x58];
    Owner *owner;
} Obj;

extern void func_1556B0(Obj *o, int a, int b);
extern void func_1579C0(Obj *o, int a, int b);
extern void func_159F10(Obj *o, int a);

void func_15A488(Obj *o, Cmd *cmd)
{
    func_1556B0(o, cmd->a, cmd->b);
    func_1579C0(o, cmd->a, cmd->b);
    if (o->owner->flags & 1)
        func_159F10(o, cmd->a);
}
