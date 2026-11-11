typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_003DD898[];
extern int func_1458D8(unsigned int idx);
extern int func_1458A0(unsigned int idx);
extern unsigned int func_143078(void *p);

int func_1455A8(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_1458D8(idx) == 0)
        return 0;
    if (func_1458A0(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_003DD898[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_143078(&D_003DD898[idx]);
    if (val > cap)
        return 0;
    D_003DD898[idx].value = val;
    D_003DD898[idx].flag = 0;
    return 1;
}
