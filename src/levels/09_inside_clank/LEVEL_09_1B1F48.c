struct Holder_1B1F48 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1B1F48 D_00380000;

void func_1B1F48(char *object)
{
    struct Holder_1B1F48 *holder = &D_00380000;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
