/* LEVEL_01:0x04DB68 -- clears two optional handles on a record, calling the release helpers. */
extern void func_078E78(unsigned char *a0);
extern void func_07C670(int, int);

void func_04DB68(char *record)
{
    unsigned char *handle;
    int value;
    handle = *(unsigned char **)(record + 0x59c);
    if (handle != 0) {
        func_078E78(handle);
    }
    value = *(int *)(record + 0xda4);
    if (value != 0) {
        func_07C670(value, 1);
        *(int *)(record + 0xda4) = 0;
    }
}
