extern int D_0023F760;
extern int D_00301A88[];

int func_0ADEE8(int index, int value)
{
    if (index >= D_0023F760)
        return 0;
    D_00301A88[index] = value;
    return 1;
}