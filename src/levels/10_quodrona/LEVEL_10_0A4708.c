extern int D_001FF8A0;
extern int D_002BBC08[];

int func_0A4708(int index, int value)
{
    if (index >= D_001FF8A0)
        return 0;
    D_002BBC08[index] = value;
    return 1;
}