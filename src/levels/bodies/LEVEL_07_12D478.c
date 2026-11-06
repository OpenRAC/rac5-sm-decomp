extern int D_0021B18C;
extern int func_12CE30(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_12D478(char *record)
{
    if (func_12CE30(record, D_0021B18C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
