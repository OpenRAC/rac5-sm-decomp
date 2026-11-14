/* LEVEL_01:0x14DD38 -- runs two setup calls with the command's two values, and a third with one of them when the owner's flag bit is set. */
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

extern void func_148F60(Obj *o, int a, int b);
extern void func_14B270(Obj *o, int a, int b);
extern void func_14D7C0(Obj *o, int a);

void func_14DD38(Obj *o, Cmd *cmd)
{
    func_148F60(o, cmd->a, cmd->b);
    func_14B270(o, cmd->a, cmd->b);
    if (o->owner->flags & 1)
        func_14D7C0(o, cmd->a);
}
