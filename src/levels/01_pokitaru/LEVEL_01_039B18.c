/* LEVEL_01:0x039B18 -- looks up a record entry by byte index and calls a helper. */
extern void func_08B7F0(int, int);

void func_039B18(char *record)
{
    char *first = *(char **)(record + 0x40);
    unsigned int off = (unsigned char)record[0x44] * 0x34;
    char *second = *(char **)(record + 0x48);
    char *array = *(char **)(first + 4);
    char *item = *(char **)(array + off + 4);
    func_08B7F0(*(int *)(item + 0x20), *(int *)(second + 0xe4));
}
