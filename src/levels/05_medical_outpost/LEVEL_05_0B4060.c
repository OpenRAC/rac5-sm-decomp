extern int D_001EBA50[];
extern int D_001EBA58[];

void func_0b4060(int index)
{
    int v = D_001EBA50[index];

    if (v != 0 && --D_001EBA50[index] != 0) {
        D_001EBA58[index] = D_001EBA58[index] + 8;
    } else {
        D_001EBA58[index] = D_001EBA58[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001EBA58[index] > max)
            D_001EBA58[index] = max;
    }
    if (D_001EBA58[index] < 0)
        D_001EBA58[index] = 0;
}
