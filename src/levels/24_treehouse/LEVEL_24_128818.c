extern int *D_001D7CCC;

int func_1287D8(int mode, int arg);

int func_128818(void)
{
    if (func_1287D8(0x10, 0)) {
        int *p = D_001D7CCC;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
