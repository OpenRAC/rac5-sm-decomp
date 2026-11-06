extern int D_001F5F0C;
extern int func_1257A8(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_125DF0(char *record)
{
    if (func_1257A8(record, D_001F5F0C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
