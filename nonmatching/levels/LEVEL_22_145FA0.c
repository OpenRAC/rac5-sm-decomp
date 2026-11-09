/* LEVEL_22.REL:0x145FA0: reviewed 108-byte candidate, held for ABI review.
 * Builds a control word from a flags argument, calls two helpers on a local
 * buffer and stores the second helper's result.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_087718 returning int with (pointer, int, pointer, int, int,
 * int, int), but the accepted LEVEL_22_087718.c defines it returning void with
 * (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_087718(unsigned char *buf, unsigned int flags, unsigned char *tbl, int n, int a, int b, int c);
int func_0878F0(unsigned char *buf);

extern unsigned char D_00147968[];

void func_145FA0(int *out, unsigned int flags)
{
    unsigned char buf[16];
    unsigned int f;

    f = (flags & 0xFFFFFFC3) | 0x18;
    f = (f & 0xFFFFFFFC) | 1;
    func_087718(buf, f, D_00147968, 0xF0, 0, -1, 0);
    *out = func_0878F0(buf);
}
