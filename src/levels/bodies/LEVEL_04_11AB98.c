struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_0034BF38;

void func_11AB98(int index, int value)
{
    if (index < 0x13)
        D_0034BF38.val[index] += value;
}
