struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_0027F968;

void func_0EEA80(int index, int value)
{
    if (index < 0x13)
        D_0027F968.val[index] += value;
}
