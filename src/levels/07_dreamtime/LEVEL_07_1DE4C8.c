/* LEVEL_07:0x1DE4C8 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_1DE188(void);
extern void func_06F280(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_003AE450;
void func_1DE4C8(void)
{
    unsigned int i;
    if (func_1DE188() != 0) {
        for (i = 0; i < 2; i++)
            func_06F280(&D_003AE450.r[i]);
        D_003AE450.flag = 0;
    }
}
