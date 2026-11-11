struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_001A2E28;

void MEM_AddAssetUsage__F12MEMAssetTypeUi(int index, int value)
{
    if (index < 0x13)
        D_001A2E28.val[index] += value;
}
