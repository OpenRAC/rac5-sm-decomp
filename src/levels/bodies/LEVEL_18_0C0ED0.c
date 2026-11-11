/* LEVEL_18:0x0C0ED0 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001A2F34;
extern unsigned char D_001B3919;
extern void *D_001D1A20;

void func_0A5120(void *value);
void func_0A4E80(void);
extern int func_10EC10(void *p);
void func_0A40A8(int a);
int func_10F990(void);
void func_0946D8(void);
void func_0270B8(void);

void func_0C0ED0(void)
{
    func_0A5120(D_001A2F34->w1C68);
    func_0A4E80();
    if (D_001B3919 != 0) {
        func_10EC10(D_001D1A20);
    }
    func_0A40A8(7);
    func_10F990();
    func_0946D8();
    func_0270B8();
}
