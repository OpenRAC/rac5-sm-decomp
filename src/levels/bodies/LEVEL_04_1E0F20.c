extern int D_003B3D1C;

void func_1E0F20(int target)
{
    int *link = &D_003B3D1C;
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
