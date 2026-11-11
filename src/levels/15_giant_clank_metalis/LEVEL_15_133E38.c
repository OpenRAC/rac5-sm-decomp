/* LEVEL_15:0x133E38 -- when flag 1 is set, shortens a linked counter; then clears that flag, sets two others and reports success. */
int func_133E38(char *record)
{
    int value;
    if ((*(int *)(record + 0x64) & 1) != 0) {
        value = *(int *)(record + 0x40);
        if (value != 0) {
            *(short *)(value + 0x40) = *(short *)(value + 0x40) - 1;
        }
    }
    *(int *)(record + 0x64) = (*(int *)(record + 0x64) & -2) | 0x830;
    return 1;
}
