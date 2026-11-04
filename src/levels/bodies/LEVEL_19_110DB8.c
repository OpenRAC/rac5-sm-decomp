extern int D_001B5CF8;

int func_110DB8(void *p)
{
    if (D_001B5CF8 == 0) {
        D_001B5CF8 = (int)p;
        return 1;
    }
    return 0;
}
