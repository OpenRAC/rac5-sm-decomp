extern unsigned int D_0020B0D8;
extern int D_002519C0[];

void func_080500(int wanted)
{
    unsigned int index = 0;
    if (D_0020B0D8 != 0) {
        int *item = D_002519C0;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_0020B0D8);
    }
}
