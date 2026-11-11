extern int D_0020EAF4;
extern int D_002B7488[1];
extern int D_002B7490[1];

int func_1036C0(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_0020EAF4 & (1 << i);
        if (bit) {
            int b = D_002B7488[i];
            int aligned = (b + 3) & -4;
            D_002B7488[i] = aligned;
            D_002B7490[i] -= aligned - b;
        }
    }
    if (D_002B7490[0] < need * 0x30)
        return 0;
    return D_002B7488[0];
}
