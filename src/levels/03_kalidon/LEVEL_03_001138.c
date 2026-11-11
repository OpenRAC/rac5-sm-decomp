extern char *D_002078C8;

void func_001138(int index)
{
    char *base = D_002078C8 + 0xb0;
    int *field = (int *)(base + index * 0x30);
    --*field;
}
