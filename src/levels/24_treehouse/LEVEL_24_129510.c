extern int D_001D7CE4;
extern int D_001D7CE8;

int func_129510(int a0, int a1, int a2, int a3, int a4)
{
    if (D_001D7CE8 == 0)
        return 0;
    if (a0 != D_001D7CE8)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_001D7CE4 != 0)
        goto fail;
    if (*(int *)(D_001D7CE4 + 4) != 0)
        goto fail;
    *(int *)(D_001D7CE4 + 12) = a1;
    *(int *)(D_001D7CE4 + 8) = a2;
    *(int *)(D_001D7CE4 + 20) = a3;
    *(int *)(D_001D7CE4 + 16) = a4;
    return 1;
fail:
    return 0;
}
