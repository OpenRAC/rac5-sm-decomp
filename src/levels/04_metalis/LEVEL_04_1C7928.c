/* LEVEL_04:0x1C7928 -- looks up the record for one fixed key, keeps it in a global and sets its two limits. */
extern int D_002225F4;
extern int func_1364E8(unsigned int value);

void func_1C7928(void)
{
    D_002225F4 = func_1364E8(0x27b9d697u);
    if (D_002225F4 != 0) {
        *(float *)(D_002225F4 + 0x18) = 1000.0f;
        *(float *)(D_002225F4 + 0x1c) = 10000.0f;
    }
}
