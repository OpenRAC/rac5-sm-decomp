/* LEVEL_01:0x04DB68 -- clears two optional handles on a record, calling the release helpers. */
extern void func_078E78(void);
extern void func_07C670(int, int);

void func_04DB68(char *record)
{
    int value;
    value = *(int *)(record + 0x59c);
    if (value != 0) {
        func_078E78();
    }
    value = *(int *)(record + 0xda4);
    if (value != 0) {
        func_07C670(value, 1);
        *(int *)(record + 0xda4) = 0;
    }
}
