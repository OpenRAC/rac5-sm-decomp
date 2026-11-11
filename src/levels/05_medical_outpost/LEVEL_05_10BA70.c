struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_0031D5F8;

void func_10BA70(int index, int value)
{
    if (index < 0x13)
        D_0031D5F8.val[index] += value;
}
