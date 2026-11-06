extern int D_0039882C;

void func_1CD6F0(int target)
{
    int *link = &D_0039882C;
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
