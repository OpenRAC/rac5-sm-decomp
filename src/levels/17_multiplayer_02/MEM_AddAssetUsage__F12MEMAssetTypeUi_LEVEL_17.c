struct tbl {
    int pad[8];
    int val[19];
};

extern struct tbl D_002708E8;

void MEM_AddAssetUsage__F12MEMAssetTypeUi(int index, int value)
{
    if (index < 0x13)
        D_002708E8.val[index] += value;
}
