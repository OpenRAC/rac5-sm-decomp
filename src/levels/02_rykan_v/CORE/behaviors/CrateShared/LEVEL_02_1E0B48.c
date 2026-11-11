struct Holder_1E0B48 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1E0B48 D_003B0780;

void func_1E0B48(char *object)
{
    struct Holder_1E0B48 *holder = &D_003B0780;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
