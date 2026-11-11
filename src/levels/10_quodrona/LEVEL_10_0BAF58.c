extern void func_0BB010(unsigned char *p);

int func_0BAF58(unsigned char *p)
{
    unsigned char *saved;
    unsigned int i;

    *(int *)(p + 0x30) = 2;
    saved = *(unsigned char **)(p + 0x2C);
    for (i = 0; i < *(unsigned int *)(p + 0x34); i++) {
        **(unsigned int **)(p + 0x2C) = *(int *)(p + 0x24) + i * 0xE4;
        *(unsigned char **)(p + 0x2C) += 4;
        if (*(unsigned char **)(p + 0x2C) > *(unsigned char **)(p + 0x28)) {
            *(unsigned char **)(p + 0x2C) = *(unsigned char **)(p + 0x28);
            return 0;
        }
    }
    **(unsigned int **)(p + 0x2C) = 0;
    *(unsigned char **)(p + 0x2C) += 4;
    if (*(unsigned char **)(p + 0x2C) > *(unsigned char **)(p + 0x28)) {
        *(unsigned char **)(p + 0x2C) = *(unsigned char **)(p + 0x28);
        return 0;
    }
    *(unsigned char **)(p + 0) = saved;
    *(int *)(p + 4) = *(int *)(p + 0x34);
    func_0BB010(p);
    return 1;
}
