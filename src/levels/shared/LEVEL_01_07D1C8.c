void func_07D1C8(char *state)
{
    char *entry = *(char **)(state + 0x0c);
    char *end = entry + *(int *)(state + 0x30) * 0x80;
    *(short *)(state + 0x40) = 0;
    *(short *)(state + 0x42) = 0;
    while (entry != end) {
        if (*(unsigned int *)(entry + 0x64) & 1)
            (*(short *)(state + 0x40))++;
        if (*(unsigned int *)(entry + 0x64) & 6)
            (*(short *)(state + 0x42))++;
        entry += 0x80;
    }
}
