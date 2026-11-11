/* LEVEL_09:0x17EB88 -- stores the hash lookup, fills the first record's two floats when it exists and stores the second lookup. */
extern int D_001F2484;
extern int D_001F2488;
extern int func_123000(unsigned int value);

void func_17EB88(void)
{
    D_001F2484 = func_123000(0x75470382u);
    if (D_001F2484 != 0) {
        *(float *)(D_001F2484 + 0x18) = 34.0f;
        *(float *)(D_001F2484 + 0x1C) = 39.0f;
    }
    D_001F2488 = func_123000(0x3219641Eu);
}
