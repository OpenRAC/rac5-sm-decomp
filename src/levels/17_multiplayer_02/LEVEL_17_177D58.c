struct Holder_177D58 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_177D58 D_002D6E78;

void func_177D58(char *object)
{
    struct Holder_177D58 *holder = &D_002D6E78;
    *(char **)(object + 0x40) = holder->current;
    holder->current = object;
}
