struct Entry_16C230 {
    char *member;
    char pad_04[0x18];
};

unsigned char func_16C230(char *object)
{
    struct Entry_16C230 *entries = *(struct Entry_16C230 **)(object + 0x54);
    unsigned char count = 0;
    unsigned int i;
    for (i = 0; i < 8; i++) {
        char *member = entries[i].member;
        if (member != 0 && *(unsigned char *)(member + 0x45) != 0)
            count++;
    }
    return count;
}
