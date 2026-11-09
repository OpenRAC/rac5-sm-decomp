/* LEVEL_15.REL:0x11A8C0: reviewed 88-byte candidate, held for ABI review.
 * Clears a few low status bits of a word, sets bit 2, then runs two helpers on
 * a local buffer.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_07A808 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_15_07A808.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_00119BA8[];

void func_07A808(unsigned char *buf, unsigned int mask, unsigned char *tbl, int n, int a, int b, int c);
void func_07A9E0(unsigned char *buf);

void func_11A8C0(unsigned int x)
{
    unsigned char buf[16];
    unsigned int m;

    m = (x & 0xFFFFFFC3) | 0x4;
    func_07A808(buf, m & 0xFFFFFFFC, D_00119BA8, 0x38, 0, -1, 0);
    func_07A9E0(buf);
}
