/* LEVEL_22:0x13CB68 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_13C828(void);
extern void func_063718(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_002E8478;
void func_13CB68(void)
{
    unsigned int i;
    if (func_13C828() != 0) {
        for (i = 0; i < 2; i++)
            func_063718(&D_002E8478.r[i]);
        D_002E8478.flag = 0;
    }
}
