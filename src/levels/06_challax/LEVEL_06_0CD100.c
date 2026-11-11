/* LEVEL_06:0x0CD100 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001E2EAC;
extern unsigned char D_001F34E9;
extern void *D_00209670;

void func_0B19F8(void *value);
void func_0B1738(void);
int func_129970(void *p);
extern int func_0B0848(int a);
int func_12A640(void);
void func_0A0C18(void);
void func_028498(void);

void func_0CD100(void)
{
    func_0B19F8(D_001E2EAC->w1C68);
    func_0B1738();
    if (D_001F34E9 != 0) {
        func_129970(D_00209670);
    }
    func_0B0848(7);
    func_12A640();
    func_0A0C18();
    func_028498();
}
