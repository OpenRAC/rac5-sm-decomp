/* USA LEVEL_01.REL:0x1CDFE0, 132-byte candidate (14 November 2026).
 * Measured pinned: 1 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
/* LEVEL_01:0x1CDFE0 -- builds two work blocks with the first helper and passes the arguments on to the second. */
extern void func_1CE388(void *a0, void *a1, void *a2, void *a3, void *t0, void *t1, void *t2);
extern void func_1CF650(void *a0, void *a1, void *a2, void *a3, void *t0);

void func_1CDFE0(void *p0, void *p1, void *p2, void *p3, void *p4, void *p5)
{
    char work[32];

    func_1CE388(p0, p2, work, work + 16, p1, p3, p5);
    func_1CF650(p0, p1, p2, p3, p4);
}
