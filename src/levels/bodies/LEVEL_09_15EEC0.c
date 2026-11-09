/* LEVEL_09:0x15EEC0 -- true when the object's key is in its context table or
   the owner's state flag is set. */
typedef struct {
    char pad[0x15A];
    unsigned char flag;
} State;

typedef struct {
    char pad[0x58];
    State *state;
} Owner;

typedef struct {
    char pad[0x2C];
    Owner *owner;
    char pad30[0x4];
    void *table;
} Context;

typedef struct {
    char pad[0x54];
    Context *context;
} Obj;

extern char *func_019740(void);
extern int func_0810E8(void *table, int key);

int func_15EEC0(Obj *obj)
{
    Context *context = obj->context;

    if (func_0810E8(context->table, (int)func_019740()))
        return 1;
    return context->owner->state->flag != 0;
}
