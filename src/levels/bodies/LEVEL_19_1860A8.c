/* LEVEL_19:0x1860A8 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_185F28(void);
extern void func_05E208(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_002E5F18;
void func_1860A8(void)
{
    unsigned int i;
    if (func_185F28() != 0) {
        for (i = 0; i < 2; i++)
            func_05E208(&D_002E5F18.r[i]);
        D_002E5F18.flag = 0;
    }
}
