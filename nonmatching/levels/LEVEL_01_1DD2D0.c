/* USA LEVEL_01.REL:0x1DD2D0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern char D_002097A0[];
extern char D_00209860[];
extern char D_001DCCB8[];

extern void func_1DF9B8(void *p);
extern void func_1DFE10(void *p);
extern int func_1DFE40(void *first, void *second);

void func_1DD2D0(void *a0)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            func_1DF9B8(D_002097A0 + i * 0x60 + j * 0x20);
    }
    func_1DFE10(D_00209860);
    func_1DFE40(a0, D_001DCCB8);
}
