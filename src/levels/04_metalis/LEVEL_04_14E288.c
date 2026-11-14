/* LEVEL_04:0x14E288 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_002205AC;
extern unsigned int D_002B25DC;

void func_14E288(void)
{
    D_002205AC = (D_002205AC & 0xF800FFFFU) | (D_002B25DC << 16);
}
