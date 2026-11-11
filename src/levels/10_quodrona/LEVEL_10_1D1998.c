extern int D_003A1F34;

void func_1D1998(int target)
{
    int *link = &D_003A1F34;
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
