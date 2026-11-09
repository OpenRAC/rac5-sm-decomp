/* LEVEL_09.REL:0x182880: reviewed 104-byte candidate, held for ABI review.
 * Calls helpers on the object sub-record and returns one when the checks pass.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_019740 returning int with no arguments, but the accepted
 * LEVEL_09_019740.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int func_019740();
extern int func_0810E8(void *a0, unsigned int a1);
extern void func_079108(char *a0, int a1);

int func_182880(char *a0)
{
    int r;
    char *s0;

    s0 = *(char **)(a0 + 0x54);
    if (*(void **)(s0 + 0x14) == 0) {
        return 0;
    }
    r = func_0810E8(*(void **)(s0 + 0x14), func_019740());
    if (r == 0) {
        return 0;
    }
    func_079108(a0, 1);
    return 1;
}
