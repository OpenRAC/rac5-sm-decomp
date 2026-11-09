/* LEVEL_15.REL:0x106880: reviewed 100-byte candidate, held for ABI review.
 * Calls one helper on a base object, one on a field, then a helper on each
 * strided record.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_11D5B0 returning void with (pointer), but the accepted
 * LEVEL_15_02C060.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002ED948[];
extern void func_0804B0(char *p);
extern void func_13B5B0(char *p);
extern void func_11D5B0(char *p);

void func_106880(void)
{
    char *base;
    char *p;
    char *end;

    base = D_002ED948;
    func_0804B0(base);
    end = base + 0xAD4;
    func_13B5B0(base + 0xF0);
    p = base + 0xFC;
    do {
        func_11D5B0(p);
        p += 0x118;
    } while (p < end);
}
