/* LEVEL_07.REL:0x1082A8: reviewed 100-byte candidate, held for ABI review.
 * Returns a cached status word and fills it from a helper pair on first use.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0987D0 returning int with (pointer, int, pointer, int, int,
 * int, int), but the accepted LEVEL_07_0987D0.c defines it returning void with
 * (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0021AD48;
extern int D_0021AD44;
extern char D_00108498[];
extern int func_0987D0(char *buf, int a, char *tab, int n, int a4, int a5, int a6);
extern int func_0989A8(char *buf);

int func_1082A8(void)
{
    char buf[16];
    int v;

    v = D_0021AD48;
    if (v != -1) {
        return v;
    }
    func_0987D0(buf, D_0021AD44, D_00108498, 0x38, 0, -1, 0);
    return (D_0021AD48 = func_0989A8(buf));
}
