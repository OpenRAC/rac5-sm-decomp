/* LEVEL_02.REL:0x1223B0, bounded 196-byte candidate.
 * Isolated pinned C object: 200 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: v0/v1 for param_8/param_9 and the dot-product order differ; the retail starts with param_9. Reopen by reordering the products and their results.
 */
void func_121A90(int param_1, float param_2, float *param_3, int param_6,
                 float *param_5);

void func_1223B0(int param_1, float param_2, int param_3, float *param_5,
                 int param_6, float *param_7, float *param_8, float *param_9,
                 float *param_10)
{
    float v1[4];
    float v2[4];

    v1[1] = param_5[0] * param_9[0] + param_5[1] * param_9[1] +
            param_5[2] * param_9[2];
    v1[0] = param_5[0] * param_8[0] + param_5[1] * param_8[1] +
            param_5[2] * param_8[2];
    v1[2] = param_5[0] * param_10[0] + param_5[1] * param_10[1] +
            param_5[2] * param_10[2];
    v2[0] = param_2 * param_7[0];
    v2[1] = param_2 * param_7[1];
    v2[2] = param_2 * param_7[2];
    func_121A90(param_1, param_2, v1, param_6, v2);
}
