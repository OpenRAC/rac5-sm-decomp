extern unsigned int D_0020A414;
extern int D_0024FD30[];

int *func_07C728(int wanted)
{
    unsigned int index = 0;
    if (D_0020A414 != 0) {
        int *item = D_0024FD30;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_0020A414);
    }
    return 0;
}
