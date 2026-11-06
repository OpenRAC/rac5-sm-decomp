extern int D_0015B80C;
extern int func_0EDCB0(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_0EE2A0(char *record)
{
    if (func_0EDCB0(record, D_0015B80C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
