/* LEVEL_01.REL:0x1E8530: reviewed 120-byte candidate, held for ABI review.
 * Masks and sets flag bits of its argument, formats a message into a buffer,
 * and returns the helper result or the fallback result.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_096948 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_01_096948.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_001E7E30[];
extern void func_096948(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern int func_096BE0(char *buf);
extern int func_096B20(char *buf);

int func_1E8530(unsigned int x)
{
    char buf[16];
    unsigned int v;
    int r;

    v = (x & 0xFFFFFFC3U) | 4U;
    func_096948(buf, v & 0xFFFFFFFCU, D_001E7E30, 0x28, 0, -1, 0);
    r = func_096BE0(buf);
    if (r != -1) {
        return r;
    }
    return func_096B20(buf);
}
