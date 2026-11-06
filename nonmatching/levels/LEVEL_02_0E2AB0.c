/* LEVEL_02.REL:0x0E2AB0, bounded 200-byte candidate.
 * Isolated pinned C object: 192 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: The real signature has ten arguments, with three floats in f12-f14 and a 0x60 local buffer. Reopen with the full signature and the measured frame.
 */
extern void func_000E28D8(unsigned char *buf, int a, int b);
extern int func_0009D330(unsigned char *buf);
extern void func_000E2980(int, int, int, int, int, int, int, int, int);

void func_000E2AB0(int p1, int p2, int p3, int p4, int p5, int p6, int p7,
                   int p8, int p9, int p10)
{
    unsigned char buf[0x60];

    func_000E28D8(buf, p1, p5);
    buf[0xA] = buf[0xA] | 1;
    if (func_0009D330(buf) != -1) {
        func_000E2980(p1, p2, p3, func_0009D330(buf), p5, p6, p7, p9, p10);
    }
}
