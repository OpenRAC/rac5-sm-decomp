/* LEVEL_15.REL:0x10E8E8: reviewed 100-byte candidate, held for ABI review.
 * Runs one setup helper, then steps a helper over a strided record range.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_11D5B0 returning void with (pointer), but the accepted
 * LEVEL_15_02C060.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002EFDE8[];
extern void func_0804B0(char *a0);
extern void func_13B5B0(char *a0);
extern void func_11D5B0(char *a0);

void func_10E8E8(void)
{
    char *s0;
    char *s1;
    char *s2;

    s0 = D_002EFDE8;
    func_0804B0(s0);
    s2 = s0 + 0x558;
    s1 = s0 + 0xF8;
    func_13B5B0(s0 + 0xF0);
    do {
        func_11D5B0(s1);
        s1 += 0x118;
    } while (s1 < s2);
}
