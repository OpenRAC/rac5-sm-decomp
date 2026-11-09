/* LEVEL_03:0x0D25E8 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_0020C62C;
extern unsigned char D_0021CC69;
extern void *D_002336F0;

void func_0B6F10(void *value);
void func_0B6C50(void);
void func_131668(void *p);
void func_0B5E08(int a);
int func_132338(void);
void func_0A61C8(void);
void func_029EA8(void);

void func_0D25E8(void)
{
    func_0B6F10(D_0020C62C->w1C68);
    func_0B6C50();
    if (D_0021CC69 != 0) {
        func_131668(D_002336F0);
    }
    func_0B5E08(7);
    func_132338();
    func_0A61C8();
    func_029EA8();
}
