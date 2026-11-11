extern int D_001F60E8;

int func_12F320(void *p)
{
    if (D_001F60E8 == 0) {
        D_001F60E8 = (int)p;
        return 1;
    }
    return 0;
}
