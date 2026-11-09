/* LEVEL_22:0x0C0D40 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_0015332C;
extern unsigned char D_00163969;
extern void *D_00177C70;

void func_0A5678(void *value);
void func_0A53B8(void);
void func_10A770(void *p);
void func_0A4570(int a);
int func_10B440(void);
void func_094A58(void);
void func_024648(void);

void func_0C0D40(void)
{
    func_0A5678(D_0015332C->w1C68);
    func_0A53B8();
    if (D_00163969 != 0) {
        func_10A770(D_00177C70);
    }
    func_0A4570(7);
    func_10B440();
    func_094A58();
    func_024648();
}
