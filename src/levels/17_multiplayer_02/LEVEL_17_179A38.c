extern int D_002D6E8C;

void func_179A38(int target)
{
    int *link = &D_002D6E8C;
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
