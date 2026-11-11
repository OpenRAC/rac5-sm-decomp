/* LEVEL_03:0x1E1D10 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1E19D0(void);
extern void func_06CD88(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_003B3BA0;
void func_1E1D10(void)
{
    unsigned int i;
    if (func_1E19D0() != 0) {
        for (i = 0; i < 2; i++)
            func_06CD88(&D_003B3BA0.r[i]);
        D_003B3BA0.flag = 0;
    }
}
