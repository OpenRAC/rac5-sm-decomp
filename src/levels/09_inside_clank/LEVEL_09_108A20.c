struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_00318EB8;

void func_108A20(int index, int value)
{
    if (index < 0x13)
        D_00318EB8.val[index] += value;
}
