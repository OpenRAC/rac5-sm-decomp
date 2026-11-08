extern int D_0037AC70[];

void func_0D0350(int *x, int *y)
{
    if (*x < -D_0037AC70[6])
        *x = -D_0037AC70[6];
    if (*x > D_0037AC70[8])
        *x = D_0037AC70[8];
    if (*y < -D_0037AC70[7])
        *y = -D_0037AC70[7];
    if (*y > D_0037AC70[9])
        *y = D_0037AC70[9];
}
