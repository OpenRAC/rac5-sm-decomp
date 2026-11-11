/* LEVEL_08:0x1F0AA8 -- placement copy of LEVEL_04_1C7928.c: looks up the record for one fixed key, keeps it in a global and sets its two limits. */
extern int D_0025267C;
extern int func_13B5A0(unsigned int value);

void func_1F0AA8(void)
{
    D_0025267C = func_13B5A0(0x27b9d697u);
    if (D_0025267C != 0) {
        *(float *)(D_0025267C + 0x18) = 1000.0f;
        *(float *)(D_0025267C + 0x1c) = 10000.0f;
    }
}
