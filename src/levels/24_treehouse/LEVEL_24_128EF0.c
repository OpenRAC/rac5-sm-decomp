/* LEVEL_24:0x128EF0 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001D7CCC;
extern unsigned char D_001D7CD1;

void func_025898(void);
int func_0A08A0(void);
int func_1286F8(int);
int func_128C28(void);
int func_0D4B88(void);
void func_128D30(void);
int func_129370(void *);

int func_128EF0(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_025898();
    func_0A08A0();
    if (!D_001D7CCC)
        return 0;
    if (func_1286F8(1))
        return 0;
    r = func_128C28();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001D7CD1;
    D_001D7CD1 = 0;
    func_0D4B88();
    func_128D30();
    func_129370(a1);
    *(int *)(D_001D7CCC + 4) = 8;
    *(int *)(D_001D7CCC + 0xC) = r;
    D_001D7CD1 = saved;
    return 1;
}
