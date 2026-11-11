/* LEVEL_16:0x189310 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_189190(void);
extern void func_05EDE8(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_002E5D70;
void func_189310(void)
{
    unsigned int i;
    if (func_189190() != 0) {
        for (i = 0; i < 2; i++)
            func_05EDE8(&D_002E5D70.r[i]);
        D_002E5D70.flag = 0;
    }
}
