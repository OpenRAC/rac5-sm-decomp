/* LEVEL_01.REL:0x0A32A0: reviewed 68-byte candidate, held for ABI review.
 * Calls a helper on a table entry indexed by 100-byte records, or returns 0.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0A07E0 returning long long with (pointer, int, int), but
 * the accepted LEVEL_01_0A07E0.c defines it returning int with (pointer, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0029F008[];
extern long long func_0A07E0(void *, int, int);

long long func_0A32A0(int index)
{
    char *entry;
    long long result;

    entry = D_0029F008 + index * 100;
    result = 0;
    if (entry != 0) {
        result = func_0A07E0(entry, 0, 0);
    }
    return result;
}
