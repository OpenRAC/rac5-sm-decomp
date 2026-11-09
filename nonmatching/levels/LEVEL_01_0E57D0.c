/* LEVEL_01.REL:0x0E57D0: reviewed 124-byte candidate, held for ABI review.
 * Packs a table entry and two flags into a command word, then issues two
 * calls.
 * pinned C with gnu-ee-trial links 124/124 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It declares func_096948 returning void with (pointer, int, pointer, int,
 * int, int, pointer), but the accepted LEVEL_01_096948.c defines it returning
 * void with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00297DC0[];
extern char D_000E50D8[];
extern char D_000E4F60[];

void func_096948(void *buf, unsigned int val, void *p, int n, int z, int m, void *q);
void func_096B20(void *buf);

void func_0E57D0(unsigned int a, unsigned int b, unsigned int c)
{
    char buf[16];
    unsigned int word;
    unsigned int t;
    unsigned int u;
    unsigned int low;

    u = (b < 1);
    word = a << 27;
    t = (unsigned int)D_00297DC0[c];
    u = u << 15;
    low = (b << 6) | 0x7000;
    t = t << 16;
    word = word | t;
    word = word | u;
    word = word | low;
    func_096948(buf, word | 4, D_000E50D8, 0x40, 0, -1, D_000E4F60);
    func_096B20(buf);
}
