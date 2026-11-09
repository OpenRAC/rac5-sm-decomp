/* LEVEL_16:0x0B3B30 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001A19ED;
extern int D_001A1A74;
extern int D_001A19E0;
extern int D_001A19F4;
extern int D_001A1A70;
extern int D_001A1A78;
extern int D_001A19E4;
extern unsigned char D_001A19DC;
extern unsigned char D_001A19DA;
extern unsigned char D_001A19DD;
extern int D_001AE428;
extern int D_001AE42C;
extern int D_001AE430;
extern unsigned char D_001AE434;
extern unsigned char D_001AE435;
extern int D_001AE438;
extern int D_001AE43C;
extern int D_001AE440;
extern unsigned char D_001AE444;
extern char D_00277390[];
extern char D_001DEB60[];
extern char *strcpy(char *d, const char *s);

void func_0B3B30(void)
{
    if (D_001A19ED != 0)
        D_001AE428 = 0;
    else
        D_001AE428 = D_001A1A74;
    D_001AE42C = D_001A19E0;
    strcpy(D_00277390, D_001DEB60);
    D_001AE434 = D_001A19DC;
    D_001AE435 = D_001A19DA;
    D_001AE438 = D_001A1A70;
    D_001AE43C = D_001A1A78;
    D_001AE440 = D_001A19F4;
    D_001AE444 = D_001A19DD;
    D_001AE430 = D_001A19E4;
}
