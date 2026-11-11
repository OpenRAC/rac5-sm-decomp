extern char *D_001F625C;

void func_087DE8(unsigned int value)
{
    *(unsigned int *)(D_001F625C + 0x100) =
        value & *(unsigned int *)(D_001F625C + 0x1F8);
}
