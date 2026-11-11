/* LEVEL_10:0x175F68 -- unlinks the object's list entry (head at +0x1C4, tail pointer at +0x1D8 of its state block). */
void func_175F68(char *object)
{
    char *node = *(char **)(object + 0x58) + 0x1C4;
    char *linked = *(char **)(node + 0x14);

    if (linked != 0) {
        *(char **)linked = *(char **)node;
        if (*(char **)node != 0) {
            *(char **)(*(char **)node + 0x14) = *(char **)(node + 0x14);
        }
        *(char **)(node + 0x14) = 0;
    }
}
