extern char *D_001555DC;

void func_079200(unsigned int value)
{
    *(unsigned int *)(D_001555DC + 0x100) =
        value & *(unsigned int *)(D_001555DC + 0x1F8);
}
