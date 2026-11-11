/* LEVEL_08:0x211068 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_210D28(void);
extern void func_073C48(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_003EB5F0;
void func_211068(void)
{
    unsigned int i;
    if (func_210D28() != 0) {
        for (i = 0; i < 2; i++)
            func_073C48(&D_003EB5F0.r[i]);
        D_003EB5F0.flag = 0;
    }
}
