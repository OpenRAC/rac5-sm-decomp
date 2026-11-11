/* LEVEL_06:0x1882B8 -- releases the attached object handle held by the nested record, then clears the slot. */
extern void func_07A718(char *record);

void func_1882B8(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *handle = *(char **)(nested + 0xC);
    if (handle != 0) {
        func_07A718(handle);
        *(int *)(nested + 0xC) = 0;
    }
}
