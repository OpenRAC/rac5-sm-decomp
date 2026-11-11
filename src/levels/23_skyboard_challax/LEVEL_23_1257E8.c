typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
    char pad2[4];         /* size 0x824 */
} ENTRY;

extern ENTRY D_0035FB58[];
extern int func_125B18(unsigned int idx);
extern int func_125AE0(unsigned int idx);
extern unsigned int func_1232B8(void *p);

int func_1257E8(unsigned int idx, unsigned int val)
{
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_125B18(idx) == 0)
        return 0;
    if (func_125AE0(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    if (val == D_0035FB58[idx].cur)
        return 0;
    if (val == 0)
        return 0;
    cap = func_1232B8(&D_0035FB58[idx]);
    if (val > cap)
        return 0;
    D_0035FB58[idx].value = val;
    D_0035FB58[idx].flag = 0;
    return 1;
}
