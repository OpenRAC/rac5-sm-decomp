/* LEVEL_16:0x0C1EF8 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001A1AB4;
extern unsigned char D_001B2499;
extern void *D_001D04A0;

void func_0A61A8(void *value);
void func_0A5F08(void);
void func_10FF60(void *p);
void func_0A50B0(int a);
int func_110CE0(void);
void func_0956C8(void);
void func_027B08(void);

void func_0C1EF8(void)
{
    func_0A61A8(D_001A1AB4->w1C68);
    func_0A5F08();
    if (D_001B2499 != 0) {
        func_10FF60(D_001D04A0);
    }
    func_0A50B0(7);
    func_110CE0();
    func_0956C8();
    func_027B08();
}
