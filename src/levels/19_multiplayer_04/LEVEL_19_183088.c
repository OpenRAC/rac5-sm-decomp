extern int D_002E5E44;

void func_183088(int target)
{
    int *link = &D_002E5E44;
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
