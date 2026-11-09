/* LEVEL_02:0x1655D0 -- true when the record is the global anchor, or its child state matches a nonzero anchor state. */
extern char *D_0024C984;
int func_1655D0(char *record)
{
    char *anchor = D_0024C984;
    char *child = *(char **)(record + 0x58);
    int state;
    if (record == anchor)
        return 1;
    state = *(int *)(child + 0x24);
    if (state != 0) {
        if (state == (int)anchor)
            return 1;
    }
    return 0;
}
