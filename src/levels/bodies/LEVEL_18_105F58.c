extern int D_001B5E1C;
extern int func_105968(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_105F58(char *record)
{
    if (func_105968(record, D_001B5E1C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
