/* LEVEL_16.REL:0x079508: reviewed 80-byte candidate, held for ABI review.
 * Placement copy of LEVEL_17_079F80.c.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_079688 returning int with no arguments, but the accepted
 * LEVEL_16_079688.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
/* LEVEL_17.REL:0x079F80 -- when the probe succeeds, runs the pair of angles
   through func_079428 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_001A428C;

int func_079688(void);
int func_079428(float x, float y);

int func_079508(void)
{
    int r;

    if (!func_079688())
        return 0;
    r = func_079428(D_001A428C->f_134, D_001A428C->f_138);
    return D_001A428C->f_108 | r;
}
