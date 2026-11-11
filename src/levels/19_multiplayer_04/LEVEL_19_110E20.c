extern int D_001B5CF4;
extern int D_001B5CF8;

int func_110E20(int a0, int a1, int a2, int a3, int a4)
{
    if (D_001B5CF8 == 0)
        return 0;
    if (a0 != D_001B5CF8)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_001B5CF4 != 0)
        goto fail;
    if (*(int *)(D_001B5CF4 + 4) != 0)
        goto fail;
    *(int *)(D_001B5CF4 + 12) = a1;
    *(int *)(D_001B5CF4 + 8) = a2;
    *(int *)(D_001B5CF4 + 20) = a3;
    *(int *)(D_001B5CF4 + 16) = a4;
    return 1;
fail:
    return 0;
}
