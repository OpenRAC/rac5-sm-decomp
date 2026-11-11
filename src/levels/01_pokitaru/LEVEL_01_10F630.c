struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_00331738;

void func_10F630(int index, int value)
{
    if (index < 0x13)
        D_00331738.val[index] += value;
}
