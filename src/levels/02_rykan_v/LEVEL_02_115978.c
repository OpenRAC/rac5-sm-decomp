struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_00348C38;

void func_115978(int index, int value)
{
    if (index < 0x13)
        D_00348C38.val[index] += value;
}
