/* LEVEL_01:0x1919D8 -- adds the global offset to the first word of the object's record when that word is non-zero. */
extern int D_00206D94;

void func_1919D8(char *object)
{
    int *record = *(int **)(object + 0x54);
    int value = record[0];

    if (value != 0) {
        record[0] = D_00206D94 + value;
    }
}
