/* LEVEL_01.REL:0x03BF60: reviewed 48-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_040E78.c.
 * pinned C with gnu-ee-trial links 48/48 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, int), but the accepted
 * caller LEVEL_01_03BF90.c declares it returning void with (pointer, pointer).
 * It defines the function returning void with (pointer, int), but the accepted
 * caller LEVEL_01_03C060.c declares it returning void with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct State {
    char pad_00[0x64];
    int flags;
} State;

typedef struct Context {
    char pad_00[0x5AC];
    State *state;
} Context;

void func_03BF60(Context *context, int value)
{
    State *state = context->state;

    if (state != 0)
        state->flags = (state->flags & ~0x20) | (((value ^ 1) & 1) << 5);
}
