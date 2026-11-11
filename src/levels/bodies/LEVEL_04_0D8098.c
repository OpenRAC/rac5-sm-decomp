/* LEVEL_04:0x0D8098 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_0020D12C;
extern unsigned char D_0021DAA9;
extern void *D_00234170;

void func_0BC930(void *value);
void func_0BC670(void);
int func_13F720(void *p);
void func_0BB828(int a);
int func_1403F0(void);
void func_0AB658(void);
void func_029B58(void);

void func_0D8098(void)
{
    func_0BC930(D_0020D12C->w1C68);
    func_0BC670();
    if (D_0021DAA9 != 0) {
        func_13F720(D_00234170);
    }
    func_0BB828(7);
    func_1403F0();
    func_0AB658();
    func_029B58();
}
