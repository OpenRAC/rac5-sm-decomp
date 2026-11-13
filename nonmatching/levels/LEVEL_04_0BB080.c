/* USA LEVEL_04.REL:0x0BB080, 108-byte candidate.
 * Measured pinned/gnu-ee-trial: 108 linked bytes; first differing word +0x24.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern void func_0BB060(void);
extern void func_0B3958(int, void *, float);
extern int D_00215B70[];
extern char D_00342DB0[];
void func_0BB080(int index, int unused, unsigned char value, int arg)
{
    func_0BB060();
    D_00215B70[index] = value;
    func_0B3958(arg, D_00342DB0 + index * 16, 0.0f);
}
