extern int D_001DA464;
extern int D_001DA468;

int func_125188(int a0, int a1, int a2, int a3, int a4)
{
    if (D_001DA468 == 0)
        return 0;
    if (a0 != D_001DA468)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_001DA464 != 0)
        goto fail;
    if (*(int *)(D_001DA464 + 4) != 0)
        goto fail;
    *(int *)(D_001DA464 + 12) = a1;
    *(int *)(D_001DA464 + 8) = a2;
    *(int *)(D_001DA464 + 20) = a3;
    *(int *)(D_001DA464 + 16) = a4;
    return 1;
fail:
    return 0;
}
