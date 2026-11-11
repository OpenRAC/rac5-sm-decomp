/* LEVEL_18:0x18A7B0 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_18A630(void);
extern void func_05D8F8(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_002E5CF0;
void func_18A7B0(void)
{
    unsigned int i;
    if (func_18A630() != 0) {
        for (i = 0; i < 2; i++)
            func_05D8F8(&D_002E5CF0.r[i]);
        D_002E5CF0.flag = 0;
    }
}
