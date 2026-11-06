/* LEVEL_02.REL:0x059DC0, bounded 160-byte candidate.
 * Isolated pinned C object: 160 bytes; first linked
 * difference at body byte +2. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is exact; the floating registers differ (retail keeps x in f1 and 1.0f in f4, the source gets x in f0 and 1.0f in f3). Reopen by forcing a short-lived FP pseudo before x while keeping the a0-relative stores.
 */
void func_00059DC0(float param_1, int param_2, float *param_3)
{
    float *pos;
    float *vel;
    float *acc;
    float x;

    x = param_3[0];

    *(float *)(param_2 + 0x1B4) = x * param_1;
    *(float *)(param_2 + 0x1B8) = param_3[1] * param_1;
    *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + x * param_1;
    *(int *)(param_2 + 0x1C0) = 0;
    *(float *)(param_2 + 0x1BC) = param_3[2] * param_1;
    pos = (float *)(param_2 + 0x30);
    vel = (float *)(param_2 + 0x1B4);
    acc = (float *)(param_2 + 0xC5C);
    pos[1] = pos[1] + vel[1];
    pos[2] = pos[2] + vel[2];
    pos[0] = pos[0] + acc[0];
    pos[1] = pos[1] + acc[1];
    pos[2] = pos[2] + acc[2];
    pos[3] = 1.0f;
}
