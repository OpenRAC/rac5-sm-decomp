struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_00248DA8;

void func_0D4EB0(int index, int value)
{
    if (index < 0x13)
        D_00248DA8.val[index] += value;
}
