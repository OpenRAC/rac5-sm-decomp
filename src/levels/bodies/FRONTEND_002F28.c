extern int D_00027E9C[];

int func_02F28(void)
{
    unsigned char *p = (unsigned char *)D_00027E9C[0];

    if (p != 0) {
        if (*p != 0)
            return 1;
    }
    return 0;
}
