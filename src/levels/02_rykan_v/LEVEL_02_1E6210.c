/* LEVEL_02:0x1E6210 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1E5ED0(void);
extern void func_073880(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_003B09B8;
void func_1E6210(void)
{
    unsigned int i;
    if (func_1E5ED0() != 0) {
        for (i = 0; i < 2; i++)
            func_073880(&D_003B09B8.r[i]);
        D_003B09B8.flag = 0;
    }
}
