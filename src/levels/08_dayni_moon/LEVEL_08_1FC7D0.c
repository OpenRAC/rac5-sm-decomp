/* LEVEL_08:0x1FC7D0 -- placement copy of LEVEL_04_1D7850.c: creates an object from a fixed key (0x98F7EE77), keeps its address in a global and, when it exists, initialises three of its floats (5.0, 10.0, 0.1). */
extern int D_00252844;
extern int func_13B5A0(unsigned int value);

void func_1FC7D0(void)
{
    D_00252844 = func_13B5A0(0x98F7EE77u);
    if (D_00252844 != 0) {
        *(float *)(D_00252844 + 0x18) = 5.0f;
        *(float *)(D_00252844 + 0x1C) = 10.0f;
        *(float *)(D_00252844 + 0x28) = 0.10000000149011612f;
    }
}
