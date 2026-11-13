/* LEVEL_08:0x1548D8 -- placement copy of LEVEL_04_14F840.c. */
extern void func_153DB0(char *item);
extern void func_178428(char *object, unsigned char value);
extern void func_1AD410(void), func_1AD348(void *object);
extern void func_1784D0(char *object, unsigned char value);
void func_1548D8(char *object, unsigned int index)
{
    char *resource = *(char **)(object + 0x54);
    char *state = *(char **)(object + 0x58);
    char *slot = resource + index * 4;
    char *child = *(char **)slot;
    child[0x45] = 1;
    object[0x45] = 1;
    state[0x11] = index;
    func_153DB0(object);
    if (*(char **)(resource + 0x20))
        func_178428(*(char **)(resource + 0x20), 1);
    if (*(char **)(resource + 0x24)) {
        func_1AD410();
        func_1AD348(*(char **)(resource + 0x24));
        if (*(char **)(resource + 0x20))
            func_1784D0(object, 0);
    }
}
