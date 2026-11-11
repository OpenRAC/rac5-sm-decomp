extern int D_0038524C;

void func_1B9B58(int target)
{
    int *link = &D_0038524C;
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
