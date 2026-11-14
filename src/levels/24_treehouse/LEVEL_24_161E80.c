/* LEVEL_24:0x161E80 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001D8B8C;
extern unsigned int D_00263C9C;

void func_161E80(void)
{
    D_001D8B8C = (D_001D8B8C & 0xF800FFFFU) | (D_00263C9C << 16);
}
