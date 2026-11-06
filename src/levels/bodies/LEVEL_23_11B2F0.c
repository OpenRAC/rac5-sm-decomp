extern int D_001DA28C;
extern int func_11ACA8(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_11B2F0(char *record)
{
    if (func_11ACA8(record, D_001DA28C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
