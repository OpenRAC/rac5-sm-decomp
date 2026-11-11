/* LEVEL_24:0x0CC140 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001C4C2C;
extern unsigned char D_001D5269;
extern void *D_001EB570;

void func_0B09B8(void *value);
void func_0B06F8(void);
int func_128DA0(void *p);
extern int func_0AF8B0(int index);
int func_129A70(void);
void func_09FCC0(void);
void func_0275F0(void);

void func_0CC140(void)
{
    func_0B09B8(D_001C4C2C->w1C68);
    func_0B06F8();
    if (D_001D5269 != 0) {
        func_128DA0(D_001EB570);
    }
    func_0AF8B0(7);
    func_129A70();
    func_09FCC0();
    func_0275F0();
}
