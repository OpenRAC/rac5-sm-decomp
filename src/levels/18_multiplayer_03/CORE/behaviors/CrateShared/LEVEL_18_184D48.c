struct Holder_184D48 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_184D48 D_002E5BF8;

void func_184D48(char *object)
{
    struct Holder_184D48 *holder = &D_002E5BF8;
    *(char **)(object + 0x40) = holder->current;
    holder->current = object;
}
