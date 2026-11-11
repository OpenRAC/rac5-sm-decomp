/* LEVEL_03:0x1987B8 -- placement copy of LEVEL_01_1924F0.c: scans 0x80-byte records between two globals; returns 1 at the first flagged record whose linked sub-field is nonzero. */
extern char *D_00221694;
extern char *D_00221698;

int func_1987B8(void)
{
    char *p;

    p = D_00221694;
    while (p != D_00221698) {
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
