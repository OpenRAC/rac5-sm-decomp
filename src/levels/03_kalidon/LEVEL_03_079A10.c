extern unsigned int D_0020E798;
extern int D_00255330[];

void func_079A10(int wanted)
{
    unsigned int index = 0;
    if (D_0020E798 != 0) {
        int *item = D_00255330;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_0020E798);
    }
}
