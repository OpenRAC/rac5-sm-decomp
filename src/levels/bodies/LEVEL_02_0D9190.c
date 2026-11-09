/* LEVEL_02:0x0D9190 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_00208C2C;
extern unsigned char D_002195A9;
extern void *D_0022F770;

void func_0BDA38(void *value);
void func_0BD778(void);
void func_139650(void *p);
void func_0BC930(int a);
int func_13A320(void);
void func_0ACD58(void);
void func_02A878(void);

void func_0D9190(void)
{
    func_0BDA38(D_00208C2C->w1C68);
    func_0BD778();
    if (D_002195A9 != 0) {
        func_139650(D_0022F770);
    }
    func_0BC930(7);
    func_13A320();
    func_0ACD58();
    func_02A878();
}
