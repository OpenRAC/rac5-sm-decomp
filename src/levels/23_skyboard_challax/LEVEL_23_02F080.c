extern unsigned char D_00200578[];

void func_02F080(int value)
{
    if (D_00200578[0x1aa4] == 0) {
        int *current = (int *)(D_00200578 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
