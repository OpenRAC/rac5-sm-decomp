extern int D_001F5A8C;
extern int func_120488(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_120AD0(char *record)
{
    if (func_120488(record, D_001F5A8C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
