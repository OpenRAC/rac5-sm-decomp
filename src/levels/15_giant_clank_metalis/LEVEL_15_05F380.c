extern unsigned int D_0014AD94;
extern int D_00182498[];

int *func_05F380(int wanted)
{
    unsigned int index = 0;
    if (D_0014AD94 != 0) {
        int *item = D_00182498;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_0014AD94);
    }
    return 0;
}
