extern int D_001F0B68;

int func_12C940(void *p)
{
    if (D_001F0B68 == 0) {
        D_001F0B68 = (int)p;
        return 1;
    }
    return 0;
}
