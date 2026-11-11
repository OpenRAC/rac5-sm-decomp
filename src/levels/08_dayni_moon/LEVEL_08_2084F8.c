extern int D_003EB264;

void func_2084F8(int target)
{
    int *link = &D_003EB264;
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
