/* LEVEL_01.REL:0x0038B8: Ghidra body 180 bytes.
 * Pure C with `gnu-ee-trial-divpad` links 172 bytes and first differs at +6.
 * Recheck global pointer and floating-point register scheduling under divpad. No matching credit.
 */
extern float *D_001EF254;
extern float atan2f(float, float);
extern void func_003600(float, float, int, int);

void func_0038B8(float identity, float *vector, int third, int fourth)
{
    float *transform = D_001EF254;
    float y = -(vector[0] * transform[27] +
                vector[1] * transform[28] +
                vector[2] * transform[29]);
    float x = -(vector[0] * transform[21] +
                vector[1] * transform[22] +
                vector[2] * transform[23]);
    float angle = atan2f(y, x);
    func_003600(angle, identity, third, fourth);
}
