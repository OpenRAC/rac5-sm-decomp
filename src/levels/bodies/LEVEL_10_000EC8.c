/* LEVEL_10:0x000EC8 -- placement copy of LEVEL_03_001138.c. */
extern char *D_001F8248;

void func_000EC8(int index)
{
    char *base = D_001F8248 + 0xb0;
    int *field = (int *)(base + index * 0x30);
    --*field;
}
