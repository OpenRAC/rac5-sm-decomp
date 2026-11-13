extern void func_14ED18(char *item);
extern void func_142270(char *object, unsigned char value);
extern void func_1968A8(void), func_1967E0(void *object);
extern void func_142280(char *object, unsigned char value);
void func_14F840(char *object, unsigned int index)
{
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    char *slot = resource + index * 4;
    char *child = *(char **)slot;
    child[0x45] = 1;
    object[0x45] = 1;
    state[0x11] = index;
    func_14ED18(object);
    if (*(char **)(resource + 0x20))
        func_142270(*(char **)(resource + 0x20), 1);
    if (*(char **)(resource + 0x24)) {
        func_1968A8();
        func_1967E0(*(char **)(resource + 0x24));
        if (*(char **)(resource + 0x20))
            func_142280(object, 0);
    }
}
