extern int D_001F6474;
extern int D_0029C608[1];
extern int D_0029C610[1];

int func_105A00(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_001F6474 & (1 << i);
        if (bit) {
            int b = D_0029C608[i];
            int aligned = (b + 3) & -4;
            D_0029C608[i] = aligned;
            D_0029C610[i] -= aligned - b;
        }
    }
    if (D_0029C610[0] < need * 0x30)
        return 0;
    return D_0029C608[0];
}
