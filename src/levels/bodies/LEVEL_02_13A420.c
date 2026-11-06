typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_003A5B18[];
extern int func_13A750(unsigned int idx);
extern int func_13A718(unsigned int idx);
extern unsigned int func_137EF0(void *p);

int func_13A420(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_13A750(idx) == 0)
        return 0;
    if (func_13A718(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_003A5B18[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_137EF0(&D_003A5B18[idx]);
    if (val > cap)
        return 0;
    D_003A5B18[idx].value = val;
    D_003A5B18[idx].flag = 0;
    return 1;
}
