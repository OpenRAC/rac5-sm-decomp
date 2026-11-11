/* LEVEL_01:0x134070 -- placement copy of LEVEL_02_13A420.c. */
typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_0038E618[];
extern int func_1343A0(unsigned int idx);
extern int func_134368(unsigned int idx);
extern unsigned int func_131B40(void *p);

int func_134070(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_1343A0(idx) == 0)
        return 0;
    if (func_134368(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_0038E618[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_131B40(&D_0038E618[idx]);
    if (val > cap)
        return 0;
    D_0038E618[idx].value = val;
    D_0038E618[idx].flag = 0;
    return 1;
}
