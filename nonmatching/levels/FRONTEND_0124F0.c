/* FRONTEND.REL:0x0124F0: Ghidra body 180 bytes.
 * Pure C with `pinned` links 184 bytes and first differs at +17.
 * Recheck loop index and offset register lifetimes. No matching credit.
 */
extern void func_0125A8(int *);

int func_0124F0(int *state)
{
    int offset;
    unsigned int index = 0;
    int saved_cursor;
    int cursor;
    state[12] = 2;
    saved_cursor = state[11];
    if (state[13] != 0) {
        offset = 0;
        do {
            *(int *)(unsigned int)state[11] = state[9] + offset;
            cursor = state[11] + 4;
            state[11] = cursor;
            if ((unsigned int)state[10] < (unsigned int)cursor)
                goto overflow;
            index++;
            offset += 0xe4;
        } while (index < (unsigned int)state[13]);
    }
    *(int *)(unsigned int)state[11] = 0;
    cursor = state[11] + 4;
    state[11] = cursor;
    if ((unsigned int)state[10] < (unsigned int)cursor)
        goto overflow;
    state[0] = saved_cursor;
    state[1] = state[13];
    func_0125A8(state);
    return 1;
overflow:
    state[11] = state[10];
    return 0;
}
