/* LEVEL_15:0x0F5268 -- unless the current thing has kind 0x1C, sets the
   level state to 2 and notifies the handler with the thing's kind. */
typedef struct {
    char pad[0x24];
    int kind;
} Thing;

typedef struct {
    char pad[0x44040];
    int state;
    char pad44044[0x4416C - 0x44044];
    Thing *thing;
} Big;

extern Big D_002A8B58;
extern void func_000300(int);

void func_0F5268(void)
{
    Big *p = &D_002A8B58;
    Thing *thing = p->thing;

    if (thing->kind != 0x1C) {
        p->state = 2;
        func_000300(thing->kind);
    }
}
