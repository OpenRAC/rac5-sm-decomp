/* LEVEL_08:0x0DD7A8 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_0023CB2C;
extern unsigned char D_0024D4A9;
extern void *D_00264470;

void func_0C2018(void *value);
void func_0C1D58(void);
int func_1447D8(void *p);
extern int func_0C0F10(int a);
int func_1454A8(void);
void func_0B0D40(void);
void func_02A628(void);

void func_0DD7A8(void)
{
    func_0C2018(D_0023CB2C->w1C68);
    func_0C1D58();
    if (D_0024D4A9 != 0) {
        func_1447D8(D_00264470);
    }
    func_0C0F10(7);
    func_1454A8();
    func_0B0D40();
    func_02A628();
}
