extern int D_001C9CA0;
extern int D_00283C48[];

int func_09A330(int index, int value)
{
    if (index >= D_001C9CA0)
        return 0;
    D_00283C48[index] = value;
    return 1;
}