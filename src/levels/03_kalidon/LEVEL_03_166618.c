/* LEVEL_03:0x166618 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_166C38(void *object);
extern void func_06CD88(char *record);

void func_166618(void *object)
{
    char *record = func_166C38(object);
    if (record != 0) {
        func_06CD88(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
