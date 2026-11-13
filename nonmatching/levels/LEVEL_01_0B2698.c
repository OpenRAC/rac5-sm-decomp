/* USA LEVEL_01.REL:0x0B2698, 120-byte candidate.
 * Measured pinned/gnu-ee-trial: 120 linked bytes; first differing word +0x34.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern char D_00327988[];
extern int D_001FC270[];
extern void func_0B2618(int);
extern void func_0B2710(int, int);
void func_0B2698(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;
    if (outside) return;
    func_0B2618(index);
    *(int *)(D_00327988 + index * stride + 8) = 0;
    *(unsigned int *)(D_00327988 + index * stride + 16) = 0xFF0AEEFFU;
    func_0B2710(index, D_001FC270[index]);
}
