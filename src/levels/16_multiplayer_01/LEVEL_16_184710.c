struct Holder_184710 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_184710 D_002E5C88;

void func_184710(char *object)
{
    struct Holder_184710 *holder = &D_002E5C88;
    *(char **)(object + 0x40) = holder->current;
    holder->current = object;
}
