/* FRONTEND.REL:0x0125A8: reviewed 68-byte candidate, held for ABI review.
 * Stores a difference, then divides it by a helper result.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0125F0 returning int with no arguments, but the accepted
 * FRONTEND_0125F0.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int func_0125F0(void);

void func_0125A8(char *record)
{
    unsigned int den;

    *(unsigned int *)(record + 0x74) = *(unsigned int *)(record + 0x54) - *(unsigned int *)(record + 0x50);
    den = func_0125F0();
    *(unsigned int *)(record + 0x74) = *(unsigned int *)(record + 0x74) / den;
}
