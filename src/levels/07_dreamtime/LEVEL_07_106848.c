extern int D_0020A774;
extern int D_002B1F08[1];
extern int D_002B1F10[1];

int func_106848(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_0020A774 & (1 << i);
        if (bit) {
            int b = D_002B1F08[i];
            int aligned = (b + 3) & -4;
            D_002B1F08[i] = aligned;
            D_002B1F10[i] -= aligned - b;
        }
    }
    if (D_002B1F10[0] < need * 0x30)
        return 0;
    return D_002B1F08[0];
}
