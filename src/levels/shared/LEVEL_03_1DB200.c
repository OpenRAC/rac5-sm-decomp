void func_1DB200(int unused, char *node)
{
    char *linked = *(char **)(node + 0x14);
    if (linked != 0) {
        *(char **)linked = *(char **)node;
        if (*(char **)node != 0)
            *(char **)(*(char **)node + 0x14) = *(char **)(node + 0x14);
        *(char **)(node + 0x14) = 0;
    }
}
