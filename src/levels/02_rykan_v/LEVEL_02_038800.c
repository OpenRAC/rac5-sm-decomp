extern void func_087408(int);

void func_038800(char *unused, char *record)
{
    int value = *(int *)(record + 0x4c);
    if (value != 0) {
        func_087408(value);
        *(int *)(record + 0x4c) = 0;
    }
}
