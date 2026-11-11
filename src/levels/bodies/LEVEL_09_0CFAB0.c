/* LEVEL_09:0x0CFAB0 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001DDDAC;
extern unsigned char D_001EE3E9;
extern void *D_002043F0;

void func_0B43D8(void *value);
void func_0B4118(void);
int func_12C238(void *p);
void func_0B32D0(int a);
int func_12CF08(void);
void func_0A36F8(void);
void func_028F18(void);

void func_0CFAB0(void)
{
    func_0B43D8(D_001DDDAC->w1C68);
    func_0B4118();
    if (D_001EE3E9 != 0) {
        func_12C238(D_002043F0);
    }
    func_0B32D0(7);
    func_12CF08();
    func_0A36F8();
    func_028F18();
}
