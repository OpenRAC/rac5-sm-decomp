extern int D_001E0240[];

void func_027718(void)
{
    int *entry = D_001E0240;
    int *end = D_001E0240 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
