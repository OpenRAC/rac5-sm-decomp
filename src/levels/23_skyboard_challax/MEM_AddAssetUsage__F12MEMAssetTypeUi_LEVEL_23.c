struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_00302B78;

void MEM_AddAssetUsage__F12MEMAssetTypeUi(int index, int value)
{
    if (index < 0x13)
        D_00302B78.val[index] += value;
}
