extern int D_001C9874;
extern int D_0026DA48[1];
extern int D_0026DA50[1];

int func_0F7D10(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_001C9874 & (1 << i);
        if (bit) {
            int b = D_0026DA48[i];
            int aligned = (b + 3) & -4;
            D_0026DA48[i] = aligned;
            D_0026DA50[i] -= aligned - b;
        }
    }
    if (D_0026DA50[0] < need * 0x30)
        return 0;
    return D_0026DA48[0];
}
