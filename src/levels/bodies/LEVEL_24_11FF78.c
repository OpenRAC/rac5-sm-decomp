extern int D_001D7B0C;
extern int func_11F930(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_11FF78(char *record)
{
    if (func_11F930(record, D_001D7B0C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
