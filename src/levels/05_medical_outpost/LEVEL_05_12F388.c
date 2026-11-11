extern int D_001F60E4;
extern int D_001F60E8;

int func_12F388(int a0, int a1, int a2, int a3, int a4)
{
    if (D_001F60E8 == 0)
        return 0;
    if (a0 != D_001F60E8)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_001F60E4 != 0)
        goto fail;
    if (*(int *)(D_001F60E4 + 4) != 0)
        goto fail;
    *(int *)(D_001F60E4 + 12) = a1;
    *(int *)(D_001F60E4 + 8) = a2;
    *(int *)(D_001F60E4 + 20) = a3;
    *(int *)(D_001F60E4 + 16) = a4;
    return 1;
fail:
    return 0;
}
