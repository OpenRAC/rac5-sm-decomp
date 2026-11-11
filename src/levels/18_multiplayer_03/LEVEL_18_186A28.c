extern int D_002E5C0C;

void func_186A28(int target)
{
    int *link = &D_002E5C0C;
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
