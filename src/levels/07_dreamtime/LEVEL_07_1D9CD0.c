extern int D_003AE21C;

void func_1D9CD0(int target)
{
    int *link = &D_003AE21C;
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
