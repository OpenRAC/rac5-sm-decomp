/* LEVEL_04:0x174C48 -- placement copy of LEVEL_01_16B020.c: retained attempt body. */
extern char *func_175268(void *object);
extern void func_06FFE0(char *record);

void func_174C48(void *object)
{
    char *record = func_175268(object);
    if (record != 0) {
        func_06FFE0(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
