/* LEVEL_10:0x0C59C8 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001FCEE5;
extern int D_001FCF6C;
extern int D_001FCED8;
extern int D_001FCEEC;
extern int D_001FCF68;
extern int D_001FCF70;
extern int D_001FCEDC;
extern unsigned char D_001FCED4;
extern unsigned char D_001FCED2;
extern unsigned char D_001FCED5;
extern int D_002093B0;
extern int D_002093B4;
extern int D_002093B8;
extern unsigned char D_002093BC;
extern unsigned char D_002093BD;
extern int D_002093C0;
extern int D_002093C4;
extern int D_002093C8;
extern unsigned char D_002093CC;
extern char D_00332850[];
extern char D_00239260[];
extern char *strcpy(char *d, const char *s);

void func_0C59C8(void)
{
    if (D_001FCEE5 != 0)
        D_002093B0 = 0;
    else
        D_002093B0 = D_001FCF6C;
    D_002093B4 = D_001FCED8;
    strcpy(D_00332850, D_00239260);
    D_002093BC = D_001FCED4;
    D_002093BD = D_001FCED2;
    D_002093C0 = D_001FCF68;
    D_002093C4 = D_001FCF70;
    D_002093C8 = D_001FCEEC;
    D_002093CC = D_001FCED5;
    D_002093B8 = D_001FCEDC;
}
