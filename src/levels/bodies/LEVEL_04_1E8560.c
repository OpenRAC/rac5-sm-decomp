/* LEVEL_04:0x1E8560 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1E8220(void);
extern void func_06FFE0(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_003B4078;
void func_1E8560(void)
{
    unsigned int i;
    if (func_1E8220() != 0) {
        for (i = 0; i < 2; i++)
            func_06FFE0(&D_003B4078.r[i]);
        D_003B4078.flag = 0;
    }
}
