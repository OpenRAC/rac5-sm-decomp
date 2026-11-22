/* LEVEL_04:0x13F870 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0022046C;
extern unsigned char D_00220471;

void func_027CC8(void);
int func_0AC238(void);
int func_13F078(int);
int func_13F5A8(void);
int func_0E0AE0(void);
void func_13F6B0(void);
int func_13FCF0(void *);

int func_13F870(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_027CC8();
    func_0AC238();
    if (!D_0022046C)
        return 0;
    if (func_13F078(1))
        return 0;
    r = func_13F5A8();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_00220471;
    D_00220471 = 0;
    func_0E0AE0();
    func_13F6B0();
    func_13FCF0(a1);
    *(int *)(D_0022046C + 4) = 8;
    *(int *)(D_0022046C + 0xC) = r;
    D_00220471 = saved;
    return 1;
}
