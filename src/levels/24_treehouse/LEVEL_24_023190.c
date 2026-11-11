extern int D_001C4BFC;
extern int D_001C4C00;

void func_023190(void)
{
    int count = D_001C4BFC - 1;

    D_001C4BFC = count;
    if (count == 0)
        D_001C4C00 = 0;
}
