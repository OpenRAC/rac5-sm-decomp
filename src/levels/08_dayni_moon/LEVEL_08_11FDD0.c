struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_003809B8;

void func_11FDD0(int index, int value)
{
    if (index < 0x13)
        D_003809B8.val[index] += value;
}
