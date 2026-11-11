extern void func_088AA8(int);

void func_038678(char *unused, char *record)
{
    int value = *(int *)(record + 0x4c);
    if (value != 0) {
        func_088AA8(value);
        *(int *)(record + 0x4c) = 0;
    }
}
