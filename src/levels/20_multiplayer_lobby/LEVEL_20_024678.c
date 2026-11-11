extern int D_00137A40[];

void func_024678(void)
{
    int *entry = D_00137A40;
    int *end = D_00137A40 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
