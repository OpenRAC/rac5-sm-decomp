extern int D_00182FC0[];

void func_0246B0(void)
{
    int *entry = D_00182FC0;
    int *end = D_00182FC0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
