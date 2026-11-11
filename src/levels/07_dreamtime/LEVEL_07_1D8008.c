struct Holder_1D8008 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1D8008 D_003AE208;

void func_1D8008(char *object)
{
    struct Holder_1D8008 *holder = &D_003AE208;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
