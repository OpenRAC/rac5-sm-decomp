extern int D_0023CAFC;
extern int D_0023CB00;

void func_025C90(void)
{
    int count = D_0023CAFC - 1;

    D_0023CAFC = count;
    if (count == 0)
        D_0023CB00 = 0;
}
