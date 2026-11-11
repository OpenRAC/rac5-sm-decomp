typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_003A9498[];
extern int func_132768(unsigned int idx);
extern int func_132730(unsigned int idx);
extern unsigned int func_12FF08(void *p);

int func_132438(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_132768(idx) == 0)
        return 0;
    if (func_132730(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_003A9498[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_12FF08(&D_003A9498[idx]);
    if (val > cap)
        return 0;
    D_003A9498[idx].value = val;
    D_003A9498[idx].flag = 0;
    return 1;
}
