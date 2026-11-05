extern char *D_001A570C;

void func_078CA8(unsigned int value)
{
    *(unsigned int *)(D_001A570C + 0x100) =
        value & *(unsigned int *)(D_001A570C + 0x1F8);
}
