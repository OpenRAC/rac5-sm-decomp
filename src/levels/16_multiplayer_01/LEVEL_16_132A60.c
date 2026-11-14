/* LEVEL_16:0x132A60 -- placement copy of LEVEL_01_14DD38.c: runs two setup calls with the command's two values, and a third with one of them when the owner's flag bit is set. */
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

extern void func_12DDB8(Obj *o, int a, int b);
extern void func_130088(Obj *o, int a, int b);
extern void func_1325D8(Obj *o, int a);

void func_132A60(Obj *o, Cmd *cmd)
{
    func_12DDB8(o, cmd->a, cmd->b);
    func_130088(o, cmd->a, cmd->b);
    if (o->owner->flags & 1)
        func_1325D8(o, cmd->a);
}
