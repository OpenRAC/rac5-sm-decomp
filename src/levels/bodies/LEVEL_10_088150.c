extern char *D_001FF25C;

void func_088150(unsigned int value)
{
    *(unsigned int *)(D_001FF25C + 0x100) =
        value & *(unsigned int *)(D_001FF25C + 0x1F8);
}
