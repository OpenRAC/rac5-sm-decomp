/* LEVEL_18:0x000DA0 -- placement copy of LEVEL_03_001138.c. */
extern char *D_0019C14C;

void func_000DA0(int index)
{
    char *base = D_0019C14C + 0xb0;
    int *field = (int *)(base + index * 0x30);
    --*field;
}
