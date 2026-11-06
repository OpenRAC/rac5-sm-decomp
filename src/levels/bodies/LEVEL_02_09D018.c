extern int D_00225870[];
void func_09D018(unsigned int *record, unsigned int first, unsigned int second,
                 int third, int fourth, int fifth, unsigned int sixth)
{
    record[3] = sixth;
    if (fifth == -1)
        fifth = D_00225870[first & 3];
    record[1] = second;
    *(unsigned short *)(record + 2) = third;
    *((unsigned char *)record + 10) = fourth;
    *((char *)record + 11) = fifth;
    record[0] = first;
}