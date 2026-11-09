/* LEVEL_04.REL:0x0329C8: reviewed 208-byte candidate, held for ABI review.
 * Reads stick-like axis values from a controller object.
 * pinned C with gnu-ee-trial links 208/208 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_08B148 returning pointer with (int), but the accepted
 * LEVEL_04_08B148.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[4];
    unsigned int flags;
    char pad8[0x2C];
    float axis;
} Pad;

extern Pad *func_08B148(int idx);
extern float func_08B430(Pad *p);
extern int func_08B4F0(unsigned int flags);
extern int func_08B528(unsigned int flags);

void func_0329C8(float *px, float *py)
{
    Pad *p = func_08B148(16);
    *px = func_08B430(p);
    *py = -p->axis;
    if (p->flags & 0x10)
        *py = 1.0f;
    else if (p->flags & 0x40)
        *py = -1.0f;
    if (func_08B4F0(p->flags))
        *px = -1.0f;
    else if (func_08B528(p->flags))
        *px = 1.0f;
}
