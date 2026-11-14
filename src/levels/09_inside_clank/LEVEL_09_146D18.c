/* LEVEL_09:0x146D18 -- placement copy of LEVEL_01_14DD38.c: runs two setup calls with the command's two values, and a third with one of them when the owner's flag bit is set. */
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

extern void func_141F40(Obj *o, int a, int b);
extern void func_144250(Obj *o, int a, int b);
extern void func_1467A0(Obj *o, int a);

void func_146D18(Obj *o, Cmd *cmd)
{
    func_141F40(o, cmd->a, cmd->b);
    func_144250(o, cmd->a, cmd->b);
    if (o->owner->flags & 1)
        func_1467A0(o, cmd->a);
}
