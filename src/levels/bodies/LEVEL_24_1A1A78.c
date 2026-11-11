/* LEVEL_24:0x1A1A78 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1A1738(void);
extern void func_067A40(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_003627B0;
void func_1A1A78(void)
{
    unsigned int i;
    if (func_1A1738() != 0) {
        for (i = 0; i < 2; i++)
            func_067A40(&D_003627B0.r[i]);
        D_003627B0.flag = 0;
    }
}
