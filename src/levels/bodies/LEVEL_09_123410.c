extern int D_001F098C;
extern int func_122DC8(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_123410(char *record)
{
    if (func_122DC8(record, D_001F098C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
