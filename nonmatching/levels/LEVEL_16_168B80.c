/* LEVEL_16.REL:0x168B80: reviewed 68-byte candidate, held for ABI review.
 * Compares the state's value with the table entry it indexes; the second
 * function is a plain wrapper.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_168B80 returning int with (int), but the accepted
 * LEVEL_16_168B80.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x68];
    unsigned char index;
    unsigned char value;
} State;

typedef struct {
    char pad[0x58];
    State *state;
} Obj;

extern unsigned char D_001D68F8[];

int func_168B80(Obj *obj)
{
    State *state = obj->state;

    return state->value == D_001D68F8[state->index];
}

int func_168BA8(Obj *obj)
{
    return func_168B80(obj);
}
