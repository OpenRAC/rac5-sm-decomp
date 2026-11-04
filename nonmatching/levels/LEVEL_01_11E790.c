/* USA LEVEL_01.REL:0x11E790. Retained C hypothesis, not a match.
 * The gnu-ee-trial-divpad profile links 532 bytes against a 536-byte
 * candidate body; the first difference is at body byte 0.
 * See docs/MATCHING-BLOCKERS.md. */
extern float fabsf(float value);
extern float func_11E6B8(float *out0, float *out1,
                         const float *a, const float *b);

float func_11E790(float *param_1, float *param_2,
                  float *param_3, float *param_4, float *param_5)
{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float local[8];

    pfVar1 = param_3;
    pfVar2 = param_4;
    pfVar3 = param_5;
    fVar4 = *pfVar1 * pfVar2[1] - *pfVar2 * pfVar1[1];
    fVar6 = *pfVar2 * pfVar3[1] - *pfVar3 * pfVar2[1];
    fVar5 = *pfVar3 * pfVar1[1] - *pfVar1 * pfVar3[1];
    if ((0.0f <= fVar4 * fVar6) && (0.0f <= fVar6 * fVar5) &&
        (fVar4 = fVar4 + fVar5 + fVar6,
         2.384185791015625e-7f < fabsf(fVar4))) {
        fVar4 = 1.0f / fVar4;
        fVar6 = fVar6 * fVar4;
        fVar5 = fVar5 * fVar4;
        fVar4 = (1.0f - fVar6) - fVar5;
        *param_1 = fVar6 * pfVar1[2] + fVar5 * pfVar2[2] + fVar4 * pfVar3[2];
        param_2[2] = fVar4;
        *param_2 = fVar6;
        param_2[1] = fVar5;
        return 0.0f;
    }
    fVar4 = func_11E6B8(&local[0], &local[1], param_5, param_3);
    fVar5 = 0.0f;
    fVar6 = func_11E6B8(&local[2], &local[3], param_3, param_4);
    if (fVar6 < fVar4) {
        local[0] = local[2];
        fVar4 = fVar6;
        local[1] = 1.0f - local[3];
        fVar5 = local[3];
    }
    fVar6 = func_11E6B8(&local[4], &local[5], param_4, param_5);
    if (fVar6 < fVar4) {
        fVar5 = 1.0f - local[5];
        local[0] = local[4];
        local[1] = 0.0f;
        fVar4 = fVar6;
    }
    *param_1 = local[0];
    *param_2 = local[1];
    param_2[1] = fVar5;
    param_2[2] = (1.0f - local[1]) - fVar5;
    return fVar4;
}
