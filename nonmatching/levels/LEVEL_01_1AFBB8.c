/* LEVEL_01.REL:0x1AFBB8: reviewed 112-byte candidate, held for ABI review.
 * Packs six small fields into one word and passes it with a table pointer to
 * two helpers.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_096948 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_01_096948.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_001AF4C8[];
extern void func_096948(char *buf, unsigned int v, char *tab, int n, int a4, int a5, int a6);
extern void func_096B20(char *buf);

void func_1AFBB8(int a, int b, int c, int d, int e, int f)
{
    char buf[16];
    unsigned int v;
    unsigned int t;

    v = (a << 27) | (b << 16);
    v = v | (c << 15);
    v = v | (d << 14);
    t = (e << 10) | 0x2000;
    v = v | t;
    v = v | (f << 6);
    v = v | 0x21;
    func_096948(buf, v, D_001AF4C8, 0x14, 0, -1, 0);
    func_096B20(buf);
}
