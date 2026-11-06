/* LEVEL_01.REL:0x005E08: Ghidra body 196 bytes.
 * Pure C with `pinned` links 192 bytes and first differs at +29.
 * Recheck floating-point register allocation and operand lifetime. No matching credit.
 */
extern int func_020CE0(float, float *, void *, float *, float *,
                       int, int, int);

float func_005E08(float time, float step, float offset, float correction,
                  float *position, float *velocity)
{
    float predicted[3];
    unsigned char workspace[32];
    float output[4];
    predicted[0] = position[0] + velocity[0] * step;
    predicted[1] = position[1] + velocity[1] * step;
    predicted[2] = position[2] + velocity[2] * step;
    if (func_020CE0((time - step) + offset, output, workspace,
                    predicted, velocity, 0x1020, 0, 0x10) != 0) {
        float adjusted = output[0] + step;
        adjusted -= offset;
        adjusted -= correction;
        time = adjusted;
    }
    return time;
}
