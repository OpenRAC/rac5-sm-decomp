/* LEVEL_16:0x16A720 -- clears the link of every flagged entry in the array. */
void func_16A720(char *list)
{
    char *entry = *(char **)(list + 0xC);
    char *end = entry + *(int *)(list + 0x30) * 0x80;

    for (; entry != end; entry += 0x80) {
        if (*(unsigned int *)(entry + 0x64) & 1)
            *(int *)(*(char **)(entry + 0x58) + 0x1C) = 0;
    }
}
