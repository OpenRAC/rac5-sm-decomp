/* LEVEL_01:0x07C7D0 -- when flags 6 are set, shortens a linked counter; then clears those flags and decrements a global counter. */
extern int D_001F615C;

void func_07C7D0(char *record)
{
    int value;
    if ((*(int *)(record + 0x64) & 6) != 0) {
        value = *(int *)(record + 0x40);
        if (value != 0) {
            *(short *)(value + 0x42) = *(short *)(value + 0x42) - 1;
        }
    }
    *(int *)(record + 0x64) = *(int *)(record + 0x64) & -7;
    D_001F615C = D_001F615C - 1;
}
