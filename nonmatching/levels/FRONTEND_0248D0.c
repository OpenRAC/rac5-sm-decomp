/* FRONTEND.REL:0x0248D0: Ghidra body 136 bytes.
 * Pinned pure C links 124 bytes and first differs at +4.
 * Recheck indexed byte-state traversal and the invalid-state return. No matching credit.
 */
extern void abort(void);

int func_0248D0(int index, int *base)
{
    char *status_base = (char *)base + 0x29c;
    char *status = status_base + index;
    while (*status == 2) {
        index = (int)*((long long *)base + index + 3);
        status = status_base + index;
    }
    if (*status == 1)
        return *base + base[index * 2 + 6];
    abort();
    return 0;
}
