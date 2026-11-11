/* LEVEL_15:0x134868 -- reads a status word from a global context and forwards a computed buffer to a helper. */
typedef struct {
    char pad_00[0x48];
    char *f_48;
    char pad_4C[0x64 - 0x4C];
    unsigned int f_64;
} Ctx;

extern Ctx *D_002F4F88;
extern int func_1345E8(void);
extern int func_06D308(char *a0);

int func_134868(void)
{
    Ctx *c;
    unsigned int flag;

    if (func_1345E8() == -1) {
        return 0;
    }
    c = D_002F4F88;
    flag = (c->f_64 >> 8) & 1;
    return func_06D308(c->f_48 + 0x5C + flag * 40);
}
