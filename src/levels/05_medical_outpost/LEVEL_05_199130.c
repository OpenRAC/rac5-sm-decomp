/* LEVEL_05:0x199130 -- resets the object's two counters and its data block's first word, then reports success. */
int func_199130(char *obj)
{
    char *data;

    data = *(char **)(obj + 0x58);
    *(int *)(obj + 0x70) = 0;
    *(unsigned int *)(obj + 0x68) = 0xFFFFFFFFu;
    *(int *)(data + 0x10) = 0;
    return 1;
}
