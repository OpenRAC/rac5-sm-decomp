extern int D_0038FBBC;

void func_1BCB00(int target)
{
    int *link = &D_0038FBBC;
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
