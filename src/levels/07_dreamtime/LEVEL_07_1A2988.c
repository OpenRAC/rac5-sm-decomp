/* LEVEL_07:0x1A2988 -- placement copy of LEVEL_01_1919D8.c: adds the global offset to the first word of the object's record when that word is non-zero. */
extern int D_0021B094;

void func_1A2988(char *object)
{
    int *record = *(int **)(object + 0x54);
    int value = record[0];

    if (value != 0) {
        record[0] = D_0021B094 + value;
    }
}
