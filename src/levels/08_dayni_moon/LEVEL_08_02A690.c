extern int D_00280640[];

void func_02A690(void)
{
    int *entry = D_00280640;
    int *end = D_00280640 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
