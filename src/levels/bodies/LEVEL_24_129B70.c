typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_0035A4D8[];
extern int func_129EA0(unsigned int idx);
extern int func_129E68(unsigned int idx);
extern unsigned int func_127640(void *p);

int func_129B70(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_129EA0(idx) == 0)
        return 0;
    if (func_129E68(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_0035A4D8[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_127640(&D_0035A4D8[idx]);
    if (val > cap)
        return 0;
    D_0035A4D8[idx].value = val;
    D_0035A4D8[idx].flag = 0;
    return 1;
}
