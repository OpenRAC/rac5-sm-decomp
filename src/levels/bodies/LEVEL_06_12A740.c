typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_0037B398[];
extern int func_12AA70(unsigned int idx);
extern int func_12AA38(unsigned int idx);
extern unsigned int func_128210(void *p);

int func_12A740(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_12AA70(idx) == 0)
        return 0;
    if (func_12AA38(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_0037B398[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_128210(&D_0037B398[idx]);
    if (val > cap)
        return 0;
    D_0037B398[idx].value = val;
    D_0037B398[idx].flag = 0;
    return 1;
}
