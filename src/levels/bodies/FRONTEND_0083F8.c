extern int D_0002B160;
extern int D_00122488[];

int func_0083F8(int index, int value)
{
    if (index < D_0002B160) {
        D_00122488[index] = value;
        return 1;
    }
    return 0;
}
