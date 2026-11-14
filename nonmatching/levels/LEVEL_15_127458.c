/* USA LEVEL_15.REL:0x127458, 136-byte candidate (14 November 2026).
 * Measured pinned: 28 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char D_0015D400[];
extern int D_001AFEC0;
extern void func_1268E8(char *a);
extern void func_13D7D8(char *a, unsigned int v);
void func_127458(void)
{
    char *p;
    char *q;
    char *end;
    unsigned int v;
    p = D_0015D400 + 0x14;
    end = p + 0x174;
    q = p + 0x30;
    v = ((unsigned int)D_001AFEC0 << 16) | 0xA0001044;
    do {
        func_1268E8(p);
        p += 0x7C;
        func_13D7D8(q, v);
        q += 0x7C;
    } while ((int)p < (int)end);
}
