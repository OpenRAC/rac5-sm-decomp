/* FRONTEND.REL:0x005618: reviewed 56-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_087F50.c.
 * pinned C with gnu-ee-trial links 56/56 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_005748 returning int with no arguments, but the accepted
 * FRONTEND_005748.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_005748(void);
extern char *D_0002AD1C;
char *func_005618(void)
{
    char *result;
    if (func_005748() != 0)
        result = D_0002AD1C + 0x1d0;
    else
        result = D_0002AD1C + 0x1e0;
    return result;
}