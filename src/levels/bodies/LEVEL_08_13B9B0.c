extern int D_0024FD4C;
extern int func_13B368(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_13B9B0(char *record)
{
    if (func_13B368(record, D_0024FD4C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
