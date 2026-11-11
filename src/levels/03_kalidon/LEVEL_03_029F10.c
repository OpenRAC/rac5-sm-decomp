extern int D_0024C240[];

void func_029F10(void)
{
    int *entry = D_0024C240;
    int *end = D_0024C240 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
