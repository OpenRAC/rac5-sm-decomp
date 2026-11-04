extern int D_001B4B74;
extern int D_001B4B78;

int func_110780(int a0, int a1, int a2, int a3, int a4)
{
    if (D_001B4B78 == 0)
        return 0;
    if (a0 != D_001B4B78)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_001B4B74 != 0)
        goto fail;
    if (*(int *)(D_001B4B74 + 4) != 0)
        goto fail;
    *(int *)(D_001B4B74 + 12) = a1;
    *(int *)(D_001B4B74 + 8) = a2;
    *(int *)(D_001B4B74 + 20) = a3;
    *(int *)(D_001B4B74 + 16) = a4;
    return 1;
fail:
    return 0;
}
