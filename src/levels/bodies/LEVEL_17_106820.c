extern int D_001A7F9C;
extern int func_106230(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_106820(char *record)
{
    if (func_106230(record, D_001A7F9C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
