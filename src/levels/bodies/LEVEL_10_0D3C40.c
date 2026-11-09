/* LEVEL_10:0x0D3C40 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001FCFAC;
extern unsigned char D_0020D5E9;
extern void *D_00223780;

void func_0B83A8(void *value);
void func_0B80E8(void);
void func_131120(void *p);
void func_0B71F8(int a);
int func_131DF0(void);
void func_0A7560(void);
void func_029E88(void);

void func_0D3C40(void)
{
    func_0B83A8(D_001FCFAC->w1C68);
    func_0B80E8();
    if (D_0020D5E9 != 0) {
        func_131120(D_00223780);
    }
    func_0B71F8(7);
    func_131DF0();
    func_0A7560();
    func_029E88();
}
