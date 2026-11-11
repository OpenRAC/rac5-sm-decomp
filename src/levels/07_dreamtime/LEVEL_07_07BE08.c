extern unsigned int D_0020A418;
extern int D_0024FDB0[];

void func_07BE08(int wanted)
{
    unsigned int index = 0;
    if (D_0020A418 != 0) {
        int *item = D_0024FDB0;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_0020A418);
    }
}
