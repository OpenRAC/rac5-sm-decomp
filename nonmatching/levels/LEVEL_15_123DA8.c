/* LEVEL_15.REL:0x123DA8: reviewed 116-byte candidate, held for ABI review.
 * Packs six small fields into one control word with a low tag, passes it with
 * a table to a helper on a local buffer, then runs a second helper on the
 * buffer.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_07A808 returning void with (pointer, int, pointer, int,
 * int, int, pointer), but the accepted LEVEL_15_07A808.c defines it returning
 * void with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_00123550[];
extern unsigned char D_00122EC0[];

void func_07A808(unsigned char *buf, unsigned int mask, unsigned char *tbl, int n, int a, int b, unsigned char *c);
void func_07A9E0(unsigned char *buf);

void func_123DA8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1)
{
    unsigned char buf[16];
    unsigned int x3;
    unsigned int x4;
    unsigned int x5;

    a0 = a0 << 27;
    a1 = a1 << 16;
    a0 = a0 | a1;
    a2 = a2 << 15;
    a0 = a0 | a2;
    x3 = a3 << 14;
    x4 = t0 << 10;
    a0 = a0 | x3;
    x4 = x4 | 0x3000;
    x5 = t1 << 6;
    a0 = a0 | x4;
    a0 = a0 | x5;
    func_07A808(buf, a0 | 4, D_00123550, 0x24, 0, -1, D_00122EC0);
    func_07A9E0(buf);
}
