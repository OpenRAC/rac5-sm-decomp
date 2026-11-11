extern int *DAT_00208C2C;

void func_0004AB20(char *param_1)
{
    unsigned int *base = (unsigned int *)(param_1 + 0xC0);
    float value;

    if (*(int *)(param_1 + 0x168) != 1)
        return;
    if ((DAT_00208C2C[9] == 2 && (base[5] & 0x4100) != 0) ||
        (DAT_00208C2C[9] != 2 && (base[5] & 0x4000) != 0)) {
        float timer;

        value = *(float *)(param_1 + 0x13C);
        value -= 1.0f;
        *(float *)(param_1 + 0x13C) = value;
        if (value > 0.0f)
            return;
        timer = *(float *)(param_1 + 0x138) + 0.002f;
        *(float *)(param_1 + 0x138) = timer;
        if (0.007000002f < timer)
            *(float *)(param_1 + 0x138) = 0.007000002f;
        return;
    }
    *(float *)(param_1 + 0x13C) = 10000.0f;
}
