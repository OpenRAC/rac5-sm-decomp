/* LEVEL_24:0x196550 -- placement copy of LEVEL_04_1C7928.c: looks up the record for one fixed key, keeps it in a global and sets its two limits. */
extern int D_001D9D74;
extern int func_11FB68(unsigned int value);

void func_196550(void)
{
    D_001D9D74 = func_11FB68(0x27b9d697u);
    if (D_001D9D74 != 0) {
        *(float *)(D_001D9D74 + 0x18) = 1000.0f;
        *(float *)(D_001D9D74 + 0x1c) = 10000.0f;
    }
}
