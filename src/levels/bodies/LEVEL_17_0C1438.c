/* LEVEL_17:0x0C1438 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001950B4;
extern unsigned char D_001A5A99;
extern void *D_001C3920;

void func_0A5688(void *value);
void func_0A53E8(void);
extern int func_10F4D8(void *p);
void func_0A4590(int a);
int func_110258(void);
void func_094BC0(void);
void func_027488(void);

void func_0C1438(void)
{
    func_0A5688(D_001950B4->w1C68);
    func_0A53E8();
    if (D_001A5A99 != 0) {
        func_10F4D8(D_001C3920);
    }
    func_0A4590(7);
    func_110258();
    func_094BC0();
    func_027488();
}
