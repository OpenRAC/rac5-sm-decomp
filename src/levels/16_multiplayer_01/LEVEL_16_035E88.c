/* LEVEL_16:0x035E88 -- placement copy of LEVEL_01_039B18.c: looks up a record entry by byte index and calls a helper. */
extern void func_07CD98(int, int);

void func_035E88(char *record)
{
    char *first = *(char **)(record + 0x40);
    unsigned int off = (unsigned char)record[0x44] * 0x34;
    char *second = *(char **)(record + 0x48);
    char *array = *(char **)(first + 4);
    char *item = *(char **)(array + off + 4);
    func_07CD98(*(int *)(item + 0x20), *(int *)(second + 0xe4));
}
