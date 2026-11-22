/* LEVEL_09:0x12C388 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001F0B4C;
extern unsigned char D_001F0B51;

void func_027040(void);
int func_0A42D8(void);
int func_12BB90(int);
int func_12C0C0(void);
int func_0D84D0(void);
void func_12C1C8(void);
int func_12C808(void *);

int func_12C388(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_027040();
    func_0A42D8();
    if (!D_001F0B4C)
        return 0;
    if (func_12BB90(1))
        return 0;
    r = func_12C0C0();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001F0B51;
    D_001F0B51 = 0;
    func_0D84D0();
    func_12C1C8();
    func_12C808(a1);
    *(int *)(D_001F0B4C + 4) = 8;
    *(int *)(D_001F0B4C + 0xC) = r;
    D_001F0B51 = saved;
    return 1;
}
