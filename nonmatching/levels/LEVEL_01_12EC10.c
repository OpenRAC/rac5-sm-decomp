/* LEVEL_01.REL:0x12EC10: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 128 bytes; first differs at +56.
 * Retry: Recover the context state read after its conditional update while preserving
 * the retail branch-likely layout; verify the aliased field type.
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
        if (context->state < 0)
            context->state = func_12EC98();
        result = 0;
        if ((unsigned int)(context->state - 4) > 1)
            result = 1;
    }
    return result;
}
