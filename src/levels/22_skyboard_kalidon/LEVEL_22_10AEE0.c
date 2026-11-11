extern int D_00166044;
extern int D_00166048;

int func_10AEE0(int a0, int a1, int a2, int a3, int a4)
{
    if (D_00166048 == 0)
        return 0;
    if (a0 != D_00166048)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_00166044 != 0)
        goto fail;
    if (*(int *)(D_00166044 + 4) != 0)
        goto fail;
    *(int *)(D_00166044 + 12) = a1;
    *(int *)(D_00166044 + 8) = a2;
    *(int *)(D_00166044 + 20) = a3;
    *(int *)(D_00166044 + 16) = a4;
    return 1;
fail:
    return 0;
}
