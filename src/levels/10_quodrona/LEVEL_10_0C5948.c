/* LEVEL_10:0x0C5948 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_002093B4;
extern int D_002093B8;
extern unsigned char D_002093BD;
extern int D_002093C0;
extern int D_002093C4;
extern int D_002093C8;
extern unsigned char D_002093CC;
extern int D_001FCED8;
extern int D_001FCEDC;
extern unsigned char D_002093AC;
extern char D_00332850[];
extern void func_0C5898(void);
extern void func_026048(char *, int, int, char *, int, int, int);

void func_0C5948(void)
{
    D_002093AC = 0;
    D_001FCED8 = D_002093B4;
    D_001FCEDC = D_002093B8;
    func_026048(D_00332850, D_002093BD, D_002093C0, (char *)func_0C5898, D_002093C4, D_002093C8, D_002093CC);
}
