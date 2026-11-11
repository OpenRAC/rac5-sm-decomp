struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_0031E4B8;

void func_105C00(int index, int value)
{
    if (index < 0x13)
        D_0031E4B8.val[index] += value;
}
