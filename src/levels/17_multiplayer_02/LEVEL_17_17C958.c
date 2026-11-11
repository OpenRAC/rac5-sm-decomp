/* LEVEL_17:0x17C958 -- placement copy of LEVEL_01_1D1578.c: clears a flag byte after a check, running a callback over a record table. */
extern int func_17C7D8(void);
extern void func_05E7D8(void *);
typedef struct { unsigned char b[0x68]; } Rec;
typedef struct { Rec r[2]; unsigned char flag; } Tab;
extern Tab D_002D6F60;
void func_17C958(void)
{
    unsigned int i;
    if (func_17C7D8() != 0) {
        for (i = 0; i < 2; i++)
            func_05E7D8(&D_002D6F60.r[i]);
        D_002D6F60.flag = 0;
    }
}
