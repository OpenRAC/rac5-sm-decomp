extern int func_0BF4F0(void *);

int func_0BF590(char *record)
{
    int change = 0;
    int first_step = func_0BF4F0(record);
    int first = (short)(*(unsigned short *)(record + 0x50) +
                        *(int *)(record + 8) * first_step);
    int second_step = func_0BF4F0(record);
    int second = (short)(*(unsigned short *)(record + 0x50) +
                         (*(int *)(record + 8) + 1) * second_step);
    short lower = *(short *)(record + 0x80);
    short upper = *(short *)(record + 0x84);
    if (first < lower) {
        change = (short)(first - lower);
    } else if (second > upper) {
        change = (short)(second - upper);
    }
    if (change != 0) {
        *(int *)(record + 0x80) += change;
        *(int *)(record + 0x84) += change;
    }
    return change;
}
