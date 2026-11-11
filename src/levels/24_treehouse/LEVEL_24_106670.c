struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_002FD5F8;

void func_106670(int index, int value)
{
    if (index < 0x13)
        D_002FD5F8.val[index] += value;
}
