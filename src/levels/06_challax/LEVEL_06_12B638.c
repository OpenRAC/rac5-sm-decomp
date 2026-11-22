/* LEVEL_06:0x12B638 -- placement copy of LEVEL_01_134F68.c: initialises a record: stores its owner words, enables it and clears the cursors. */
void func_12B638(unsigned char *object, int a1, int a2, unsigned long long a3)
{
    *(int *)(object + 0) = 0;
    *(unsigned long long *)(object + 0x10) = 0;
    *(int *)(object + 4) = a1;
    *(int *)(object + 8) = a2;
    *(int *)(object + 0x40) = 1;
    *(int *)(object + 0x3C) = a1 + 8;
    *(unsigned long long *)(object + 0x20) = 0;
    object[0x38] = 0;
    *(unsigned long long *)(object + 0x28) = a3;
    *(unsigned long long *)(object + 0x30) = 0;
}
