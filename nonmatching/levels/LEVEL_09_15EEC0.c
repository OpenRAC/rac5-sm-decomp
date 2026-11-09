/* LEVEL_09.REL:0x15EEC0: reviewed 72-byte candidate, held for ABI review.
 * True when the object's key is in its context table or the owner's state flag
 * is set.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_019740 returning int with (pointer), but the accepted
 * LEVEL_09_019740.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern int func_019740(Obj *obj);
extern int func_0810E8(void *table, int key);

int func_15EEC0(Obj *obj)
{
    Context *context = obj->context;

    if (func_0810E8(context->table, func_019740(obj)))
        return 1;
    return context->owner->state->flag != 0;
}
