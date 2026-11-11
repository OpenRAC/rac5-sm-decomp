/* LEVEL_01:0x095128 -- fills a grid of cell links from per-cell counts and stores the totals. */
void func_095128(int *state, char *cells, int unused, char *links, int extra)
{
    int height;
    int width;
    int count;
    int total = 0;
    int index;
    height = state[1];
    width = state[0];
    state[0x19] = (int)links;
    state[0x18] = (int)cells;
    count = width * height;
    for (index = 0; index < count; index++) {
        char *cell = cells + index * 8;
        unsigned int number = *(unsigned short *)(cell + 6);
        if (number != 0) {
            unsigned short *p = (unsigned short *)(links + (total * 0x10 + 0x0a));
            unsigned int left = number;
            do {
                *p = index;
                p += 8;
                left--;
            } while (left != 0);
        }
        *(unsigned short *)(cell + 4) = total;
        *(int *)cell = 0;
        *(unsigned short *)(cell + 6) = 0;
        total += number;
    }
    *(unsigned short *)(cells + count * 8 + 4) = total;
    *(int *)(cells + count * 8) = 0;
    *(unsigned short *)(cells + count * 8 + 6) = 0;



}
