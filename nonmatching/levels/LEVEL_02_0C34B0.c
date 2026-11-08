/* LEVEL_02.REL:0x0C34B0: reviewed 60-byte candidate.
 * pinned C with gnu-ee-trial links 56 bytes; first differs at +0.
 * Retry: Recover base/index register lifetimes for the stack pop without changing
 * behavior.
 * No matching credit.
 */
typedef struct {
    int entries[8];
    int count;
} Stack;

int func_0C34B0(Stack *stack, int *output)
{
    int count = stack->count;

    if (count != 0) {
        if (output != 0) {
            --count;
            stack->count = count;
            *output = stack->entries[count];
            return 1;
        }
    }
    return 0;
}
