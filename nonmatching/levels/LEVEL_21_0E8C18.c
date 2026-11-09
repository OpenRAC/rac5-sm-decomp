/* LEVEL_21.REL:0x0E8C18: reviewed 104-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_123250.c.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 104/104 bytes and is byte-
 * exact at this USA placement, but the prototypes disagree.
 * It declares func_0E8BC0 returning float with (pointer), but the accepted
 * LEVEL_15_0E8BC0.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float func_0E8BC0(void *p);

void func_0E8C18(float *a0)
{
    float s = 1.0f / func_0E8BC0(a0);

    a0[3] = a0[3] * s;
    a0[0] = a0[0] * s;
    a0[1] = a0[1] * s;
    a0[2] = a0[2] * s;
}
