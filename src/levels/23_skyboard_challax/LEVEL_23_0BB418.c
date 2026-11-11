/* LEVEL_23:0x0BB418 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001C72E5;
extern int D_001C736C;
extern int D_001C72D8;
extern int D_001C72EC;
extern int D_001C7368;
extern int D_001C7370;
extern int D_001C72DC;
extern unsigned char D_001C72D4;
extern unsigned char D_001C72D2;
extern unsigned char D_001C72D5;
extern int D_001D37B0;
extern int D_001D37B4;
extern int D_001D37B8;
extern unsigned char D_001D37BC;
extern unsigned char D_001D37BD;
extern int D_001D37C0;
extern int D_001D37C4;
extern int D_001D37C8;
extern unsigned char D_001D37CC;
extern char D_002FA890[];
extern char D_001FD2E0[];
extern char *strcpy(char *d, const char *s);

void func_0BB418(void)
{
    if (D_001C72E5 != 0)
        D_001D37B0 = 0;
    else
        D_001D37B0 = D_001C736C;
    D_001D37B4 = D_001C72D8;
    strcpy(D_002FA890, D_001FD2E0);
    D_001D37BC = D_001C72D4;
    D_001D37BD = D_001C72D2;
    D_001D37C0 = D_001C7368;
    D_001D37C4 = D_001C7370;
    D_001D37C8 = D_001C72EC;
    D_001D37CC = D_001C72D5;
    D_001D37B8 = D_001C72DC;
}
