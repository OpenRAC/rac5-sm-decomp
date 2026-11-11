/* LEVEL_06:0x1BD558 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1BD218(void);
extern void func_06B1C0(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_00385470;
void func_1BD558(void)
{
    unsigned int i;
    if (func_1BD218() != 0) {
        for (i = 0; i < 2; i++)
            func_06B1C0(&D_00385470.r[i]);
        D_00385470.flag = 0;
    }
}
