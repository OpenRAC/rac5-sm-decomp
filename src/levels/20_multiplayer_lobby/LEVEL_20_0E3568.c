extern int D_00117234;
extern int D_00117238;

int func_0E3568(int a0, int a1, int a2, int a3, int a4)
{
    if (D_00117238 == 0)
        return 0;
    if (a0 != D_00117238)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_00117234 != 0)
        goto fail;
    if (*(int *)(D_00117234 + 4) != 0)
        goto fail;
    *(int *)(D_00117234 + 12) = a1;
    *(int *)(D_00117234 + 8) = a2;
    *(int *)(D_00117234 + 20) = a3;
    *(int *)(D_00117234 + 16) = a4;
    return 1;
fail:
    return 0;
}
