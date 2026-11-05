void func_1A9CD8(char *object, char *target, unsigned int index, int value)
{
    char *table = *(char **)(object + 0x58);
    if (target != 0 && index < *(unsigned int *)(target + 0x24)) {
        char *destination;
        destination = table + 0x108;
        if ((*(unsigned int *)(table + 0x104) & 1) == 0)
            destination = table + 0x8B8;
        *(int *)(destination + index * 4) = value;
    }
}
