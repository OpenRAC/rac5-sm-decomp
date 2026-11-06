extern int D_003B397C;

void func_1DE310(int target)
{
    int *link = &D_003B397C;
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
