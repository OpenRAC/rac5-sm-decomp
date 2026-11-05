void func_135198(unsigned char *object, int a1, int a2, unsigned int a3,
                 unsigned long long a4, int a5)
{
    object[0x44] = a5;
    *(int *)(object + 4) = a1;
    *(int *)(object + 8) = a2;
    *(unsigned long long *)(object + 0x10) = a3;
    *(unsigned long long *)(object + 0x28) = a4;
    *(unsigned long long *)(object + 0x20) = 0;
    *(int *)(object + 0x40) = 0;
    *(int *)(object + 0x3C) = 0;
    object[0x38] = 0;
    *(unsigned long long *)(object + 0x30) = 0;
    *(int *)(object + 0) = 0;
}
