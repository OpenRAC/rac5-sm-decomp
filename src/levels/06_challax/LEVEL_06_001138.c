/* LEVEL_06:0x001138 -- placement copy of LEVEL_03_001138.c. */
extern char *D_001DE148;

void func_001138(int index)
{
    char *base = D_001DE148 + 0xb0;
    int *field = (int *)(base + index * 0x30);
    --*field;
}
