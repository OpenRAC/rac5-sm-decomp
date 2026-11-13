/* USA LEVEL_16.REL:0x1218A0, 116-byte candidate.
 * Measured pinned/gnu-ee-trial: 116 linked bytes; first differing word +0x0.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
struct Record { int a, b, c, d, e, f, g, h; };
struct Context { char pad[372]; unsigned int index; };
extern struct Record D_001BC090;
extern struct Context *D_001E00A8;
extern char *D_001A1AB8;
extern void func_121B90(void *);
void func_1218A0(void)
{
    do {
    D_001BC090.e = 1;
    D_001BC090.f = 10;
    D_001BC090.g = 5;
    D_001BC090.h = 65535;
    } while (0);
    D_001BC090.a = 0;
    D_001BC090.d = 0;
    D_001BC090.c = 0;
    D_001BC090.b = 0;
    func_121B90(D_001A1AB8 + (D_001E00A8->index * 1528 + 4));
}
