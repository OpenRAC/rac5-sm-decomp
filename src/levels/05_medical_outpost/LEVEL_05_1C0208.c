/* LEVEL_05:0x1C0208 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1BFEC8(void);
extern void func_06C068(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_0038FDE0;
void func_1C0208(void)
{
    unsigned int i;
    if (func_1BFEC8() != 0) {
        for (i = 0; i < 2; i++)
            func_06C068(&D_0038FDE0.r[i]);
        D_0038FDE0.flag = 0;
    }
}
