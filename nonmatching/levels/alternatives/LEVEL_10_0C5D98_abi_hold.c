/* LEVEL_10.REL:0x0C5D98: reviewed 44-byte candidate, held for ABI review.
 * Forwards two pointers to a helper with the global as first argument.
 * pinned C with gnu-ee-trial links 44/44 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0BAD10 returning int with (pointer, int, pointer, pointer),
 * but the accepted LEVEL_10_0BAD10.c defines it returning int with (pointer,
 * int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00209A58[];
extern int func_0BAD10(void *, int, void *, void *);
void func_0C5D98(void *a, void *b)
{
    func_0BAD10(D_00209A58, 0, a, b);
}
