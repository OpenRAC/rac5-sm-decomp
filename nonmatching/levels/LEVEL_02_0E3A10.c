/* LEVEL_02.REL:0x0E3A10, bounded 184-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +6. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int D_002AF2C0[];
extern char D_000E47A8[];
extern char D_000E5318[];

extern void func_09D018(char *buf, unsigned int tag, char *a, int b, int c,
                        long d, char *e);
extern void func_09D1F0(char *buf);

void func_0E3A10(int p1, int p2, int p3, long p4)
{
    char buf[16];
    int v;
    int n;

    if (p1 == 4) {
        v = 9;
    } else {
        n = 3;
        if (p1 < 3) {
            n = p1;
        }
        if (n < 0) {
            n = 0;
        }
        v = 0x13;
        if (p4 == 0) {
            v = 0x17;
        }
        v = v - n;
    }
    func_09D018(buf, (v << 27) | (D_002AF2C0[p2] << 16) | (p3 << 6) | 0x7000 | 5,
                D_000E47A8, 0x38, 0, -1, D_000E5318);
    func_09D1F0(buf);
}
