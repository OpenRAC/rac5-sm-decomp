extern unsigned int D_00197164;
extern int D_001DDE00[];

int *func_06BA00(int wanted)
{
    unsigned int index = 0;
    if (D_00197164 != 0) {
        int *item = D_001DDE00;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_00197164);
    }
    return 0;
}
