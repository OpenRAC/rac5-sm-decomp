extern unsigned int D_00106244;
extern int D_00144368[];

int *func_05A568(int wanted)
{
    unsigned int index = 0;
    if (D_00106244 != 0) {
        int *item = D_00144368;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_00106244);
    }
    return 0;
}
