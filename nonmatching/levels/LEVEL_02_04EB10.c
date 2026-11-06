/* LEVEL_02.REL:0x04EB10, bounded 160-byte candidate.
 * Isolated pinned C object: 160 bytes; first linked
 * difference at body byte +114. Not linked into the accepted
 * gate or counted.
 * Reopen: The first 22 instructions are identical; the status/flag allocation differs (retail keeps the status in v0 across the andi, GCC in v1 with a final move). Reopen by killing the call-result pseudo before the success block.
 */
extern float DAT_00246C04;
extern int func_020ED0(float, float *, char *, float *, int, int);

int func_0004EB10(float param_1, float *param_2, float *param_3)
{
    float pos[3];
    char buf[32];
    float local[4];
    float value;
    int status;

    pos[0] = param_3[0];
    pos[1] = param_3[1] + param_1;
    pos[2] = param_3[2];

    if ((unsigned char)func_020ED0((param_3[1] + param_1) - DAT_00246C04, local, buf, pos, 0x78, 0) == 0) {
        value = 1000.0f;
        status = 1;
    } else {
        status = 5;
        value = local[0] - param_1;
        if ((*(unsigned short *)(buf + 0xC) & 1) == 0)
            status = 0;
    }
    *param_2 = value;
    return status;
}
