/* LEVEL_19:0x0C17D0 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001A2C34;
extern unsigned char D_001B3619;
extern void *D_001D16A0;

void func_0A5A20(void *value);
void func_0A5780(void);
void func_110600(void *p);
void func_0A4928(int a);
int func_111380(void);
void func_094F58(void);
void func_0276B0(void);

void func_0C17D0(void)
{
    func_0A5A20(D_001A2C34->w1C68);
    func_0A5780();
    if (D_001B3619 != 0) {
        func_110600(D_001D16A0);
    }
    func_0A4928(7);
    func_111380();
    func_094F58();
    func_0276B0();
}
