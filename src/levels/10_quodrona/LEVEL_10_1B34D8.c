void func_1B34D8(char *object, char *member, unsigned int slot, short value)
{
    char *child = *(char **)(object + 0x58);
    if (slot < *(unsigned int *)(member + 0x24)) {
        char *base = child + 0x3E0;
        if ((*(unsigned int *)(child + 0x7C0) & 1u) != 0)
            base = child;
        *(short *)(base + slot * 2) = value;
    }
}
