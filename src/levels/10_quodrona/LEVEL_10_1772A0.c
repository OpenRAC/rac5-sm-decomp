/* LEVEL_10:0x1772A0 -- releases the attached resource of the record when set. */
extern void func_0F02C0(int value);

void func_1772A0(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x14);

    if (value != 0) {
        func_0F02C0(value);
        *(int *)(nested + 0x14) = 0;
    }
}
