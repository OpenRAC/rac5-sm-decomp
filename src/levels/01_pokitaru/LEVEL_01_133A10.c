extern int D_00207064;
extern int D_00207068;

int func_133A10(int a0, int a1, int a2, int a3, int a4)
{
    if (D_00207068 == 0)
        return 0;
    if (a0 != D_00207068)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_00207064 != 0)
        goto fail;
    if (*(int *)(D_00207064 + 4) != 0)
        goto fail;
    *(int *)(D_00207064 + 12) = a1;
    *(int *)(D_00207064 + 8) = a2;
    *(int *)(D_00207064 + 20) = a3;
    *(int *)(D_00207064 + 16) = a4;
    return 1;
fail:
    return 0;
}
