/* LEVEL_23:0x1A2F10 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1A2BD0(void);
extern void func_067BA8(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_00366860;
void func_1A2F10(void)
{
    unsigned int i;
    if (func_1A2BD0() != 0) {
        for (i = 0; i < 2; i++)
            func_067BA8(&D_00366860.r[i]);
        D_00366860.flag = 0;
    }
}
