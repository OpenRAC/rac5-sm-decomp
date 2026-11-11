typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_00375D98[];
extern int func_12D338(unsigned int idx);
extern int func_12D300(unsigned int idx);
extern unsigned int func_12AAD8(void *p);

int func_12D008(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_12D338(idx) == 0)
        return 0;
    if (func_12D300(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_00375D98[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_12AAD8(&D_00375D98[idx]);
    if (val > cap)
        return 0;
    D_00375D98[idx].value = val;
    D_00375D98[idx].flag = 0;
    return 1;
}
