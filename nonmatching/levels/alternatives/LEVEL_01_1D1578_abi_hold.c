/* LEVEL_01.REL:0x1D1578: reviewed 100-byte candidate, held for ABI review.
 * Clears a flag byte after a check, running a callback over a record table.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 16 other USA placements, but the prototypes disagree.
 * It declares func_06E400 returning void with (pointer), but the accepted
 * LEVEL_01_06E400.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
