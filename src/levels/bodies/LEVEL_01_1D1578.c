/* LEVEL_01:0x1D1578 -- clears a flag byte after a check, running a callback over a record table. */
extern int func_1D1238(void);
extern void func_06E400(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_00398A60;
void func_1D1578(void)
{
    unsigned int i;
    if (func_1D1238() != 0) {
        for (i = 0; i < 2; i++)
            func_06E400(&D_00398A60.r[i]);
        D_00398A60.flag = 0;
    }
}
