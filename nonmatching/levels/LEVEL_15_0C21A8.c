/* LEVEL_15.REL:0x0C21A8: reviewed 112-byte candidate, held for ABI review.
 * Packs six small fields into one word with a flag, then calls a builder with
 * a local buffer and a finisher.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_07A808 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_15_07A808.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_000C16E0[];
extern void func_07A808(char *a0, unsigned int a1, char *a2, int a3, int a4, int a5, int a6);
extern void func_07A9E0(char *a0);

void func_0C21A8(unsigned int x0, unsigned int x1, unsigned int x2, unsigned int x3, unsigned int x4, unsigned int x5)
{
    unsigned char buf[16];

    x0 <<= 27;
    x1 <<= 16;
    x0 |= x1;
    x2 <<= 15;
    x0 |= x2;
    x3 <<= 14;
    x0 |= x3;
    x4 = (x4 << 10) | 0x1000u;
    x0 |= x4;
    x5 <<= 6;
    x0 |= x5;
    func_07A808(buf, x0 | 6u, D_000C16E0, 0x3C, 0, 6, 0);
    func_07A9E0(buf);
}
