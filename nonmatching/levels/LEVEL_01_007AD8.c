/* LEVEL_01.REL:0x007AD8, bounded 168-byte candidate.
 * Isolated pinned C object: 168 bytes; first linked difference
 * at body byte +26. Not linked into the accepted gate or counted.
 * Reopen: Frame and prologue are already exact. The first difference is the floating-point register that receives D_00217E88[2]: the retail loads it in $f3, the compiled source in $f0. Reopen with a source form that changes the order in which the float temporaries are created.
 */
extern void *D_001EF254;
extern float D_00217E88[3];
extern float func_00005E08(float, float, float, float, float *, float *);

int func_00007AD8(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_001EF254 + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    target[2] = -D_00217E88[2];
    target[0] = -D_00217E88[0];
    position[2] = src[2];
    target[1] = -D_00217E88[1];
    return func_00005E08(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
