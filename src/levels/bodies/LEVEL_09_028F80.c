extern int D_00218B40[];

void func_028F80(void)
{
    int *entry = D_00218B40;
    int *end = D_00218B40 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
