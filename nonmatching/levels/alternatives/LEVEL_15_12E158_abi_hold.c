/* LEVEL_15.REL:0x12E158: reviewed 92-byte candidate, held for ABI review.
 * Builds a flag word from its argument, then calls two helpers on a local
 * record.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It defines the function returning void with (int), but the accepted caller
 * LEVEL_15_1150E8.c declares it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_07A808(void *a, unsigned int b, unsigned int c, int d, int e, int f, unsigned int g);
extern void func_07A9E0(void *a);
extern char D_0012D2B0[];

void func_12E158(unsigned int a0)
{
    unsigned int local[4];
    unsigned int m;

    m = a0 & 0xFFFFFFC3;
    m |= 4;
    m &= 0xFFFFFFFC;
    m |= 1;
    func_07A808(local, m, (unsigned int)D_0012D2B0, 44, 0, -1, 0);
    func_07A9E0(local);
}
