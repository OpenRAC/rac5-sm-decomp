/* FRONTEND.REL:0x0059E0: Ghidra body 108 bytes.
 * Pinned pure C links 96 bytes and first differs at +0.
 * Recheck tag argument width and record stride. No matching credit.
 */
unsigned short *func_0059E0(char *base, unsigned long long kind, int occurrence)
{
    unsigned short *cursor;
    unsigned short *end;
    if (base == 0) {
        return 0;
    }
    cursor = (unsigned short *)(base + *(int *)(base + 8));
    end = (unsigned short *)(base + *(int *)(base + 4));
    for (;;) {
        if (cursor >= end) {
            return 0;
        }
        if (kind == 0 || *cursor == kind) {
            occurrence--;
            if (occurrence == -1) {
                return cursor;
            }
        }
        cursor = (unsigned short *)((char *)cursor + *(int *)((char *)cursor + 4));
    }
}
