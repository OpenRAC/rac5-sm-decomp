/* LEVEL_18:0x0B2B08 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001A2E6D;
extern int D_001A2EF4;
extern int D_001A2E60;
extern int D_001A2E74;
extern int D_001A2EF0;
extern int D_001A2EF8;
extern int D_001A2E64;
extern unsigned char D_001A2E5C;
extern unsigned char D_001A2E5A;
extern unsigned char D_001A2E5D;
extern int D_001AF8A8;
extern int D_001AF8AC;
extern int D_001AF8B0;
extern unsigned char D_001AF8B4;
extern unsigned char D_001AF8B5;
extern int D_001AF8B8;
extern int D_001AF8BC;
extern int D_001AF8C0;
extern unsigned char D_001AF8C4;
extern char D_00277710[];
extern char D_001DEEE0[];
extern char *strcpy(char *d, const char *s);

void func_0B2B08(void)
{
    if (D_001A2E6D != 0)
        D_001AF8A8 = 0;
    else
        D_001AF8A8 = D_001A2EF4;
    D_001AF8AC = D_001A2E60;
    strcpy(D_00277710, D_001DEEE0);
    D_001AF8B4 = D_001A2E5C;
    D_001AF8B5 = D_001A2E5A;
    D_001AF8B8 = D_001A2EF0;
    D_001AF8BC = D_001A2EF8;
    D_001AF8C0 = D_001A2E74;
    D_001AF8C4 = D_001A2E5D;
    D_001AF8B0 = D_001A2E64;
}
