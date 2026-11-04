struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_00287128;

void func_0EB3D8(int index, int value)
{
    if (index < 0x13)
        D_00287128.val[index] += value;
}
