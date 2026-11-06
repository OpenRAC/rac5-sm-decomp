extern unsigned int D_001F6118;
extern int D_0023A4B0[];

void func_079C18(int wanted)
{
    unsigned int index = 0;
    if (D_001F6118 != 0) {
        int *item = D_0023A4B0;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_001F6118);
    }
}
