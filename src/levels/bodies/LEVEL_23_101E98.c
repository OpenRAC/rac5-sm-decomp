struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_00302B78;

void func_101E98(int index, int value)
{
    if (index < 0x13)
        D_00302B78.val[index] += value;
}
