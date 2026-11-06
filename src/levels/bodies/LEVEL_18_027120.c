extern int D_001E0440[];

void func_027120(void)
{
    int *entry = D_001E0440;
    int *end = D_001E0440 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
