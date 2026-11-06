/* LEVEL_01.REL:0x049B88, bounded 160-byte candidate.
 * Isolated pinned C object: 172 bytes; first linked
 * difference at body byte +8. Not linked into the accepted
 * gate or counted.
 * Reopen: The frame is 172 bytes instead of 160: `out` sits at 0x20 instead of 0x30 and an extra $s1 is saved. Reopen by identifying the 16-byte block at 0x20 and the exact declaration order.
 */
extern float D_0022F704;
extern char func_020570(float value, float *out, char *tmp, float *in, int size,
                        int zero);

int func_00049B88(float param_1, float *param_2, float *param_3)
{
    float in[3];
    char tmp[12];
    unsigned short flags;
    float out[4];
    int result;

    in[0] = param_3[0];
    in[1] = param_3[1] + param_1;
    in[2] = param_3[2];
    result = func_020570(in[1] - D_0022F704, out, tmp, in, 0x78, 0);
    if (result == 0) {
        out[0] = 1000.0f;
        result = 1;
    } else {
        result = 5;
        out[0] = out[0] - param_1;
        if ((flags & 1) == 0)
            result = 0;
    }
    *param_2 = out[0];
    return result;
}
