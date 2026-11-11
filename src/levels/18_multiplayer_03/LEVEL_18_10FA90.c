typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_002DC838[];
extern int func_10FDC0(unsigned int idx);
extern int func_10FD88(unsigned int idx);
extern unsigned int func_10D670(void *p);

int func_10FA90(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_10FDC0(idx) == 0)
        return 0;
    if (func_10FD88(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_002DC838[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_10D670(&D_002DC838[idx]);
    if (val > cap)
        return 0;
    D_002DC838[idx].value = val;
    D_002DC838[idx].flag = 0;
    return 1;
}
