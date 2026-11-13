/* LEVEL_24:0x138F10 -- placement copy of LEVEL_04_14F840.c. */
extern void func_1383E8(char *item);
extern void func_12B8E8(char *object, unsigned char value);
extern void func_16DB58(void), func_16DA90(void *object);
extern void func_12B8F8(char *object, unsigned char value);
void func_138F10(char *object, unsigned int index)
{
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    char *slot = resource + index * 4;
    char *child = *(char **)slot;
    child[0x45] = 1;
    object[0x45] = 1;
    state[0x11] = index;
    func_1383E8(object);
    if (*(char **)(resource + 0x20))
        func_12B8E8(*(char **)(resource + 0x20), 1);
    if (*(char **)(resource + 0x24)) {
        func_16DB58();
        func_16DA90(*(char **)(resource + 0x24));
        if (*(char **)(resource + 0x20))
            func_12B8F8(object, 0);
    }
}
