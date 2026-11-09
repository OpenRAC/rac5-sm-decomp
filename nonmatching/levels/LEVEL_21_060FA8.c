/* LEVEL_21.REL:0x060FA8: reviewed 168-byte candidate, held for ABI review.
 * Half-angle tangents fed to a helper.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 168/168 bytes and is byte-
 * exact at this USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, float, float, float,
 * float), but the accepted caller LEVEL_15_0601A8.c declares it returning void
 * with (int, float, float, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
float tanf(float);
void func_060F20(void *, float, float, float, float);

void func_060FA8(void *p, float a, float b, float c, float d)
{
    float t1 = 1.0f / tanf(b * 0.5f);
    float t2 = 1.0f / tanf(a * 0.5f);

    func_060F20(p, t2, t1, c, d);
}
