/* LEVEL_02.REL:0x003838: reviewed 76-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +5.
 * Retry: Recover the three-argument callee evaluation order while preserving the
 * float input and post-call global reload.
 * No matching credit.
 */
extern char *D_00203ED4;
extern void func_0035D0(void *, int, int);

void func_003838(int first, int second, float weight, float unused)
{
    func_0035D0(D_00203ED4 + 0xB4, first, second);
    *(float *)(D_00203ED4 + 0xC8) = weight;
}
