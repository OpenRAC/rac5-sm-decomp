extern int D_001B5B1C;
extern int func_107358(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_107948(char *record)
{
    if (func_107358(record, D_001B5B1C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
