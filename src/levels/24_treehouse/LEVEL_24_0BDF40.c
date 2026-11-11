/* LEVEL_24:0x0BDF40 -- placement copy of LEVEL_01_0C4678.c: copies a block of saved settings into the active settings. */
extern unsigned char D_001C4B65;
extern int D_001C4BEC;
extern int D_001C4B58;
extern int D_001C4B6C;
extern int D_001C4BE8;
extern int D_001C4BF0;
extern int D_001C4B5C;
extern unsigned char D_001C4B54;
extern unsigned char D_001C4B52;
extern unsigned char D_001C4B55;
extern int D_001D1030;
extern int D_001D1034;
extern int D_001D1038;
extern unsigned char D_001D103C;
extern unsigned char D_001D103D;
extern int D_001D1040;
extern int D_001D1044;
extern int D_001D1048;
extern unsigned char D_001D104C;
extern char D_002F5310[];
extern char D_001FBD60[];
extern char *strcpy(char *d, const char *s);

void func_0BDF40(void)
{
    if (D_001C4B65 != 0)
        D_001D1030 = 0;
    else
        D_001D1030 = D_001C4BEC;
    D_001D1034 = D_001C4B58;
    strcpy(D_002F5310, D_001FBD60);
    D_001D103C = D_001C4B54;
    D_001D103D = D_001C4B52;
    D_001D1040 = D_001C4BE8;
    D_001D1044 = D_001C4BF0;
    D_001D1048 = D_001C4B6C;
    D_001D104C = D_001C4B55;
    D_001D1038 = D_001C4B5C;
}
