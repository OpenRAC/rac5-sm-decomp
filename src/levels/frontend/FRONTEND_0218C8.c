/* FRONTEND:0x0218C8 -- polls eight devices until one of them answers. */
int func_021840(int);

int func_0218C8(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_021840((int)i) != 0);
    }
    return res;
}
