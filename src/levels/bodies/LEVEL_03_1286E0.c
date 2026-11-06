extern int D_0021F50C;
extern int func_128098(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_1286E0(char *record)
{
    if (func_128098(record, D_0021F50C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
