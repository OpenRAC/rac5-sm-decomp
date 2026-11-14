/* USA LEVEL_02.REL:0x16B8F0, 168-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int func_034880(char *item);

unsigned int func_16B8F0(char *o)
{
    char *a;
    char *v;
    char *w;
    unsigned char *s2;
    unsigned int cnt;
    unsigned int x;
    unsigned char i;
    unsigned char r;

    a = *(char **)(o + 0x54);
    v = *(char **)(a + 0x14);
    w = *(char **)(v + 0x54);
    s2 = (unsigned char *)(*(char **)(v + 0x58) + 0x6A8);
    cnt = (unsigned char)w[0x29];
    x = func_034880(a + 0x20);
    r = 0;
    for (i = 1; ; i++) {
        if (i >= cnt)
            break;
        if (x < s2[i])
            break;
        r = i;
    }
    return r;
}
