/* LEVEL_24:0x000F40 -- placement copy of LEVEL_03_001138.c. */
extern char *D_001BFEC8;

void func_000F40(int index)
{
    char *base = D_001BFEC8 + 0xb0;
    int *field = (int *)(base + index * 0x30);
    --*field;
}
