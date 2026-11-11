extern int D_002E5C9C;

void func_1863F0(int target)
{
    int *link = &D_002E5C9C;
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
