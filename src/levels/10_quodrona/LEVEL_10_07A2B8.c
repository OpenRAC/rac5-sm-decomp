extern unsigned int D_001FF118;
extern int D_002438B0[];

void func_07A2B8(int wanted)
{
    unsigned int index = 0;
    if (D_001FF118 != 0) {
        int *item = D_002438B0;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001FF118);
    }
}
