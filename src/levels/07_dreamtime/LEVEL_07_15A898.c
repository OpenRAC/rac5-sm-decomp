/* LEVEL_07:0x15A898 -- placement copy of LEVEL_02_1655D0.c: true when the record is the global anchor, or its child state matches a nonzero anchor state. */
extern char *D_0024AD74;
int func_15A898(char *record)
{
    char *anchor = D_0024AD74;
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
