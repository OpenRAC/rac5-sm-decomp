/* LEVEL_04:0x000F40 -- placement copy of LEVEL_03_001138.c. */
extern char *D_002083C8;

void func_000F40(int index)
{
    char *base = D_002083C8 + 0xb0;
    int *field = (int *)(base + index * 0x30);
    --*field;
}
