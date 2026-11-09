/* LEVEL_04.REL:0x0F45C8: reviewed 92-byte candidate, held for ABI review.
 * Builds a masked control word and passes a local buffer to two helpers.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 2
 * other USA placements, but the prototypes disagree.
 * It declares func_099A40 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_04_099A40.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_099A40(void *buf, unsigned int ctl, void *tbl, int n, int a, int b, int c);
void func_099C18(void *buf);

extern unsigned char D_000F4748[];

void func_0F45C8(unsigned int a0)
{
    unsigned char buf[16];
    unsigned int ctl;

    ctl = ((a0 & 0xFFFFFFC3) | 0x20) & 0xFFFFFFFC;
    func_099A40(buf, ctl | 1, D_000F4748, 64, 0, -1, 0);
    func_099C18(buf);
}
