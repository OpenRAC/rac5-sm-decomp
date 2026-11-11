struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_0033AB38;

void MEM_AddAssetUsage__F12MEMAssetTypeUi(int index, int value)
{
    if (index < 0x13)
        D_0033AB38.val[index] += value;
}
