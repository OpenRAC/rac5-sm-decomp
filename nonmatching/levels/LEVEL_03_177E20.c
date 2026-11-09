/* LEVEL_03.REL:0x177E20: reviewed 140-byte candidate, held for ABI review.
 * Stores a cosine and a square root of one minus its square, then records one
 * table value.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 140/140 bytes and is byte-
 * exact at this and 6 other USA placements, but the prototypes disagree.
 * It declares func_1282D0 returning int with (int), but the accepted
 * LEVEL_03_1282D0.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float cosf(float x);
extern float sqrtf(float x);
int func_1282D0(unsigned int id);
extern float D_003B0D38;
extern float D_003B0D3C;
extern int D_003B0D44;

void func_177E20(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_003B0D38 = s;
    D_003B0D3C = c;
    D_003B0D44 = func_1282D0(0xE5BB22E4u);
}
