struct Slots_1D5CD8 {
    int values[1];
};

void func_1D5CD8(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    struct Slots_1D5CD8 *slots = *(struct Slots_1D5CD8 **)(object + 0x54);
    unsigned int index = *(unsigned char *)(child + 0x47);
    slots->values[index] = value;
    *(unsigned char *)(child + 0x47) = *(unsigned char *)(child + 0x47) + 1;
}
