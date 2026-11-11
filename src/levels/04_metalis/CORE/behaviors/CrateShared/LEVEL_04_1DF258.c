struct Holder_1DF258 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1DF258 D_003B3D08;

void func_1DF258(char *object)
{
    struct Holder_1DF258 *holder = &D_003B3D08;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
