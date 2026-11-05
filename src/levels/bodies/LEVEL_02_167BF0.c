struct Entry_167BF0 {
    char *member;
    char pad_04[0x12];
    unsigned char key;
    char pad_17;
};

int func_167BF0(char *object, unsigned char key)
{
    struct Entry_167BF0 *entries = *(struct Entry_167BF0 **)(object + 0x54);
    unsigned int i;
    for (i = 0; i < 8; i++) {
        if (entries[i].member != 0 && entries[i].key == key)
            return (int)entries[i].member;
    }
    return 0;
}
