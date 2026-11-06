extern int D_001B499C;
extern int func_106CB8(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_1072A8(char *record)
{
    if (func_106CB8(record, D_001B499C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
