extern int D_0021C024;
extern int D_0021C028;

int func_139DC0(int a0, int a1, int a2, int a3, int a4)
{
    if (D_0021C028 == 0)
        return 0;
    if (a0 != D_0021C028)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_0021C024 != 0)
        goto fail;
    if (*(int *)(D_0021C024 + 4) != 0)
        goto fail;
    *(int *)(D_0021C024 + 12) = a1;
    *(int *)(D_0021C024 + 8) = a2;
    *(int *)(D_0021C024 + 20) = a3;
    *(int *)(D_0021C024 + 16) = a4;
    return 1;
fail:
    return 0;
}
