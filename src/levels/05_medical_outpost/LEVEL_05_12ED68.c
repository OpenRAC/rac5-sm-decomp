/* LEVEL_05:0x12ED68 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001F60CC;
extern unsigned char D_001F60D1;

void func_026E78(void);
int func_0A55E8(void);
int func_12E570(int);
int func_12EAA0(void);
int func_0D97C8(void);
void func_12EBA8(void);
int func_12F1E8(void *);

int func_12ED68(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_026E78();
    func_0A55E8();
    if (!D_001F60CC)
        return 0;
    if (func_12E570(1))
        return 0;
    r = func_12EAA0();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001F60D1;
    D_001F60D1 = 0;
    func_0D97C8();
    func_12EBA8();
    func_12F1E8(a1);
    *(int *)(D_001F60CC + 4) = 8;
    *(int *)(D_001F60CC + 0xC) = r;
    D_001F60D1 = saved;
    return 1;
}
