extern int D_001B5FF8;

int func_10F3C8(void *p)
{
    if (D_001B5FF8 == 0) {
        D_001B5FF8 = (int)p;
        return 1;
    }
    return 0;
}
