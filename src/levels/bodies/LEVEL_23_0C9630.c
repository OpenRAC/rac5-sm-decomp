/* LEVEL_23:0x0C9630 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001C73AC;
extern unsigned char D_001D79E9;
extern void *D_001ED970;

void func_0ADEF0(void *value);
void func_0ADC30(void);
int func_124A18(void *p);
void func_0ACDE8(int a);
int func_1256E8(void);
void func_09D1B8(void);
void func_027C20(void);

void func_0C9630(void)
{
    func_0ADEF0(D_001C73AC->w1C68);
    func_0ADC30();
    if (D_001D79E9 != 0) {
        func_124A18(D_001ED970);
    }
    func_0ACDE8(7);
    func_1256E8();
    func_09D1B8();
    func_027C20();
}
