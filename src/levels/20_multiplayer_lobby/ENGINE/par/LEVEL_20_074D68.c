extern int D_001266A0[];
void func_074D68(unsigned int *record, unsigned int first, unsigned int second,
                 int third, int fourth, int fifth, unsigned int sixth)
{
    record[3] = sixth;
    if (fifth == -1)
        fifth = D_001266A0[first & 3];
    record[1] = second;
    *(unsigned short *)(record + 2) = third;
    *((unsigned char *)record + 10) = fourth;
    *((char *)record + 11) = fifth;
    record[0] = first;
}