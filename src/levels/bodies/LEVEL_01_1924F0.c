/* LEVEL_01:0x1924F0 -- scans 0x80-byte records between two globals; returns 1 at the first flagged record whose linked sub-field is nonzero. */
extern char *D_00208774;
extern char *D_00208778;

int func_1924F0(void)
{
    char *p;

    p = D_00208774;
    while (p != D_00208778) {
        if (p != 0) {
            if ((*(int *)(p + 0x64) & 1) != 0) {
                if (*(int *)(*(char **)(p + 0x58) + 0x24) != 0) {
                    return 1;
                }
            }
        }
        p += 0x80;
    }
    return 0;
}
