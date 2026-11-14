/* LEVEL_20:0x094E50 -- placement copy of LEVEL_01_0BB8D0.c: runs the setup helpers and returns whether the check passed and the final query is nonzero. */
extern unsigned char D_0010D164;

extern void func_0D3A18(void);
extern void func_0E4848(void);
extern void func_0E3F30(void);
extern unsigned int func_094E40(void);
extern int func_0E2860(int a);
extern unsigned int func_0E4390(void);

unsigned int func_094E50(void)
{
    unsigned int ok = 1;
    unsigned int r;

    func_0D3A18();
    func_0E4848();
    func_0E3F30();
    if (func_094E40() != 0) {
        ok = (func_0E2860(1) ^ 1) & 1;
        if (ok != 0) {
            D_0010D164 = 0;
        }
    }
    r = func_0E4390() != 0;
    return ok & r;
}
