/* LEVEL_09:0x1A3430 -- creates an object from a fixed key (0x25DAE214), keeps its address in a global and, when it exists, initialises three of its floats (30.0, 65.0, 0.3). */
extern int D_001F2A5C;
extern int func_123000(unsigned int value);

void func_1A3430(void)
{
    D_001F2A5C = func_123000(0x25DAE214u);
    if (D_001F2A5C != 0) {
        *(float *)(D_001F2A5C + 0x18) = 30.0f;
        *(float *)(D_001F2A5C + 0x1C) = 65.0f;
        *(float *)(D_001F2A5C + 0x14) = 0.30000001192092896f;
    }
}
