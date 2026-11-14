/* LEVEL_24:0x137958 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001D7E0C;
extern unsigned int D_00263C9C;

void func_137958(void)
{
    D_001D7E0C = (D_001D7E0C & 0xF800FFFFU) | (D_00263C9C << 16);
}
