/* LEVEL_09:0x1B8478 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1B8138(void);
extern void func_06B000(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_00380248;
void func_1B8478(void)
{
    unsigned int i;
    if (func_1B8138() != 0) {
        for (i = 0; i < 2; i++)
            func_06B000(&D_00380248.r[i]);
        D_00380248.flag = 0;
    }
}
