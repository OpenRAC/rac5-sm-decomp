extern void func_083F98(int);

void func_035400(char *unused, char *record)
{
    int value = *(int *)(record + 0x4c);
    if (value != 0) {
        func_083F98(value);
        *(int *)(record + 0x4c) = 0;
    }
}
