/* LEVEL_01.REL:0x0B9D20: reviewed 140-byte candidate.
 * pinned C with gnu-ee-trial links 140 bytes; first differs at +92.
 * Retry: Find a source-level signed-clamp form or qualified codegen route that emits
 * slti rather than srl at body byte +92 while retaining the exact 140-byte frame and
 * explicit local call.
 * No matching credit.
 */
extern int func_0B9D10(void *state);

void func_0B9D20(char *state, int *start, int *end)
{
    int value;
    int limit;
    int maximum;

    if ((*(unsigned int *)(state + 0x14) & 2) == 0) {
        *start = 0;
        *end = *(int *)(state + 4);
        return;
    }

    value = *(int *)(state + 0x68) / func_0B9D10(state);
    limit = value + *(int *)(state + 0x74);
    { int negative = value < 0; if (negative) value = 0; }
    maximum = *(int *)(state + 4);
    if (limit <= maximum)
        maximum = limit;
    *start = value;
    *end = maximum;
}
