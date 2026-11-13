/* USA LEVEL_16.REL:0x165CF0, 112-byte candidate.
 * Measured pinned/gnu-ee-trial: 112 linked bytes; first differing word +0x0.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern unsigned char D_00165828[], D_00165740[];
extern void func_087530(unsigned int *, unsigned int, unsigned int, int, int, int, unsigned int);
extern int func_087708(void *);
int func_165CF0(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f)
{
    unsigned int record[4];
    unsigned int packed = (a << 27) | (b << 16) | (c << 15) | (d << 14) | ((e << 10) | 0x3000u) | (f << 6);
    func_087530(record, packed, (unsigned int)D_00165828, 24, 0, -1, (unsigned int)D_00165740);
    return func_087708(record);
}
