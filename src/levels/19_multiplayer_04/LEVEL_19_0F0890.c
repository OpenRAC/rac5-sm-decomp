struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_0027F768;

void func_0F0890(int index, int value)
{
    if (index < 0x13)
        D_0027F768.val[index] += value;
}
