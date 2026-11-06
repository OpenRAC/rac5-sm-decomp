extern int D_0020FAEC;
extern int func_127C90(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_1282D8(char *record)
{
    if (func_127C90(record, D_0020FAEC) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
