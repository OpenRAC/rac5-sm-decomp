/* USA LEVEL_05.REL:0x0266C0, 88-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 88 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original table/index declarations; separate index and byte-offset loops preserve control flow but allocate different integer registers.
 */
extern char *D_1E332C;
int func_0266C0(void *value, void *unused, int keep)
{
    unsigned int i, offset = 0;
    for (i = 0; i < 8; ++i, offset += 4) {
        char *entry = D_1E332C + offset;
        if (*(void **)(entry + 0x864) == value) {
            if (keep)
                *(void **)(entry + 0x884) = value;
            else
                *(void **)(entry + 0x884) = 0;
            *(void **)(D_1E332C + offset + 0x864) = 0;
            return 1;
        }
    }
    return 0;
}
