/* LEVEL_03:0x14D1C8 -- placement copy of LEVEL_01_14DD38.c: runs two setup calls with the command's two values, and a third with one of them when the owner's flag bit is set. */
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

extern void func_1483F0(Obj *o, int a, int b);
extern void func_14A700(Obj *o, int a, int b);
extern void func_14CC50(Obj *o, int a);

void func_14D1C8(Obj *o, Cmd *cmd)
{
    func_1483F0(o, cmd->a, cmd->b);
    func_14A700(o, cmd->a, cmd->b);
    if (o->owner->flags & 1)
        func_14CC50(o, cmd->a);
}
