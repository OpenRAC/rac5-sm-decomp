/* LEVEL_17:0x10F6D0 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001A815C;
extern unsigned char D_001A8161;

void func_0255A0(void);
int func_095078(void);
int func_10EFF0(int);
int func_10F378(void);
int func_0C9DA0(void);
void func_10F468(void);
int func_10FB58(void *);

int func_10F6D0(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_0255A0();
    func_095078();
    if (!D_001A815C)
        return 0;
    if (func_10EFF0(1))
        return 0;
    r = func_10F378();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001A8161;
    D_001A8161 = 0;
    func_0C9DA0();
    func_10F468();
    func_10FB58(a1);
    *(int *)(D_001A815C + 4) = 8;
    *(int *)(D_001A815C + 0xC) = r;
    D_001A8161 = saved;
    return 1;
}
