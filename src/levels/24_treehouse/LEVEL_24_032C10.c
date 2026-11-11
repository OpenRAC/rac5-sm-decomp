/* LEVEL_24:0x032C10 -- placement copy of LEVEL_01_039B18.c: looks up a record entry by byte index and calls a helper. */
extern void func_084A58(int, int);

void func_032C10(char *record)
{
    char *first = *(char **)(record + 0x40);
    unsigned int off = (unsigned char)record[0x44] * 0x34;
    char *second = *(char **)(record + 0x48);
    char *array = *(char **)(first + 4);
    char *item = *(char **)(array + off + 4);
    func_084A58(*(int *)(item + 0x20), *(int *)(second + 0xe4));
}
