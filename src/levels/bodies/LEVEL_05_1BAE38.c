struct Holder_1BAE38 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1BAE38 D_0038FBA8;

void func_1BAE38(char *object)
{
    struct Holder_1BAE38 *holder = &D_0038FBA8;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
