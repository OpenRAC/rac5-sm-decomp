char *func_1301A8(char *object)
{
    char *node = *(char **)(object + 0x70);
    if (node != 0) {
        int value = *(int *)(object + 0x64);
        do {
            if (*(int *)(node + 0x64) == value)
                break;
            node = *(char **)(node + 0x70);
        } while (node != 0);
    }
    return node;
}
