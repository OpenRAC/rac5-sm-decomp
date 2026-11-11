/* LEVEL_04:0x1D7850 -- creates an object from a fixed key (0x98F7EE77), keeps its address in a global and, when it exists, initialises three of its floats (5.0, 10.0, 0.1). */
extern int D_0022270C;
extern int func_1364E8(unsigned int value);

void func_1D7850(void)
{
    D_0022270C = func_1364E8(0x98F7EE77u);
    if (D_0022270C != 0) {
        *(float *)(D_0022270C + 0x18) = 5.0f;
        *(float *)(D_0022270C + 0x1C) = 10.0f;
        *(float *)(D_0022270C + 0x28) = 0.10000000149011612f;
    }
}
