struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_0034C5B8;

void MEM_AddAssetUsage__F12MEMAssetTypeUi(int index, int value)
{
    if (index < 0x13)
        D_0034C5B8.val[index] += value;
}
