void func_1A62A8(char *object)
{
    char *node = *(char **)(object + 0x58);
    char *linked = *(char **)(node + 0x14);
    if (linked != 0) {
        *(char **)linked = *(char **)node;
        if (*(char **)node != 0)
            *(char **)(*(char **)node + 0x14) = *(char **)(node + 0x14);
        *(char **)(node + 0x14) = 0;
    }
}
