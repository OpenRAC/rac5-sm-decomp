struct Holder_1813A8 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1813A8 D_002E5E30;

void func_1813A8(char *object)
{
    struct Holder_1813A8 *holder = &D_002E5E30;
    *(char **)(object + 0x40) = holder->current;
    holder->current = object;
}
