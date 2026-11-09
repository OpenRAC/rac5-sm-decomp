/* LEVEL_20:0x0AC428 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_00104194;
extern unsigned char D_00114B79;
extern void *D_00131510;

void func_090728(void *value);
void func_090488(void);
void func_0E2D48(void *p);
void func_08F6B0(int a);
int func_0E3AC8(void);
void func_07FDC0(void);
void func_024610(void);

void func_0AC428(void)
{
    func_090728(D_00104194->w1C68);
    func_090488();
    if (D_00114B79 != 0) {
        func_0E2D48(D_00131510);
    }
    func_08F6B0(7);
    func_0E3AC8();
    func_07FDC0();
    func_024610();
}
