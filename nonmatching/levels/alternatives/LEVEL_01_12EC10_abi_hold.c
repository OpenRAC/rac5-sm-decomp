/* LEVEL_01.REL:0x12EC10: reviewed 136-byte candidate, held for ABI review.
 * Resolves a 0xFF sentinel in a word, then sets a context state flag.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int D_0021A7F0;
extern int func_12EC98(void);

typedef struct Context {
    int state;
} Context;

int func_12EC10(Context *context, unsigned int *value)
{
    int result;

    if (value != 0) {
        if (*value == 0xFF)
            *value = D_0021A7F0;
        if (*value >= 25)
            return 0;
    }
    result = 1;
    if (context != 0) {
        unsigned int t;
        if (context->state < 0)
            context->state = func_12EC98();
        t = (unsigned int)context->state - 4;
        if (t < 2)
            return 0;
        result = 1;
    }
    return result;
}
