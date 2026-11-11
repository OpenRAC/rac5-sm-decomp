extern int D_003B0794;

void func_1E2810(int target)
{
    int *link = &D_003B0794;
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
