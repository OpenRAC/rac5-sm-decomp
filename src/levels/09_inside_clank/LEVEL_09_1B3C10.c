extern int D_00380014;

void func_1B3C10(int target)
{
    int *link = &D_00380014;
    int value;
    do {
        value = *link;
        if (value == target) {
            *link = *(int *)(value + 0x6c);
            return;
        }
        link = (int *)(value + 0x6c);
    } while (value != 0);
}
