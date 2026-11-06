/* LEVEL_01.REL:0x0DC120: Ghidra body 200 bytes.
 * Pure C with `gnu-ee-trial-divpad` links 200 bytes and first differs at +4.
 * Recheck the 64-bit mask expression under the qualified divpad compiler. No matching credit.
 */
extern void func_0DBF48(unsigned char *, long long, long long);
extern long long func_096C60(unsigned char *);
extern void func_0DBFF0(float, float, float, long long, long long, long long,
                        long long, long long, long long);

void func_0DC120(float first, float second, float third, long long fourth,
                 long long fifth, long long sixth, long long seventh,
                 long long eighth, long long ninth, long long tenth)
{
    unsigned char temporary[16];
    long long handle;
    func_0DBF48(temporary, fourth, eighth);
    temporary[10] |= 1;
    handle = func_096C60(temporary);
    if (handle != -1)
        func_0DBFF0(first, second, third, handle, fifth, sixth,
                    seventh, ninth, tenth);
}
