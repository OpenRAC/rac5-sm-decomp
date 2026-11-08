/* LEVEL_02.REL:0x1214B0: reviewed 192-byte candidate.
 * pinned C with gnu-ee-trial links 192 bytes; first differs at +0.
 * Retry: Recover source FP temporary lifetimes and load/store ordering under the
 * qualified compiler.
 * No matching credit.
 */
extern float fabsf(float);

void func_1214B0(float *lower, float *upper, const float *point)
{
    float pz = point[2];
    float px = point[0];
    float py = point[1];
    float lx = lower[0];
    float ly = lower[1];
    float lz = lower[2];
    float ux = upper[0];
    float uy = upper[1];
    float uz = upper[2];
    float half = 0.5f;

    lower[0] = ((lx + px) - fabsf(px - lx)) * half;
    lower[1] = ((ly + py) - fabsf(py - ly)) * half;
    lower[2] = ((lz + pz) - fabsf(pz - lz)) * half;
    upper[2] = ((uz + pz) + fabsf(pz - uz)) * half;
    upper[0] = ((ux + px) + fabsf(px - ux)) * half;
    upper[1] = ((uy + py) + fabsf(py - uy)) * half;
}
