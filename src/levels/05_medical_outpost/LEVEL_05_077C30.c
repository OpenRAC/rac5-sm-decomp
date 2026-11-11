extern unsigned int D_001E5494;
extern int D_002262F0[];

int *func_077C30(int wanted)
{
    unsigned int index = 0;
    if (D_001E5494 != 0) {
        int *item = D_002262F0;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_001E5494);
    }
    return 0;
}
