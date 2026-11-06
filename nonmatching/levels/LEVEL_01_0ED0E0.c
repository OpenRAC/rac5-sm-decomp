/* LEVEL_01.REL:0x0ED0E0: Ghidra body 116 bytes.
 * Pinned pure C links 116 bytes and first differs at +32.
 * Recheck the packed-field expression and register scheduling. No matching credit.
 */
extern void func_096948(void *, unsigned int, void *, int, int, long long, int);
extern void func_096B20(void *);
extern char D_000EC790[];

void func_0ED0E0(int a, int b, int c, int d, int e, int f, int g)
{
    char temporary[16];
    unsigned int packed = (unsigned int)a << 27;
    packed |= (unsigned int)b << 16;
    packed |= (unsigned int)c << 15;
    packed |= (unsigned int)d << 14;
    packed |= (unsigned int)e << 13;
    packed |= (unsigned int)f << 10;
    packed |= (unsigned int)g << 6;
    packed |= 0x21u;
    func_096948(temporary, packed, D_000EC790, 0x24, 0, -1LL, 0);
    func_096B20(temporary);
}
