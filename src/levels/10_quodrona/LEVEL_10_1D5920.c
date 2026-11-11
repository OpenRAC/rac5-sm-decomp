/* LEVEL_10:0x1D5920 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1D55E0(void);
extern void func_06D618(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_003A2168;
void func_1D5920(void)
{
    unsigned int i;
    if (func_1D55E0() != 0) {
        for (i = 0; i < 2; i++)
            func_06D618(&D_003A2168.r[i]);
        D_003A2168.flag = 0;
    }
}
