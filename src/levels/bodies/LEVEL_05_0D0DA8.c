/* LEVEL_05:0x0D0DA8 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001E332C;
extern unsigned char D_001F3969;
extern void *D_002096F0;

void func_0B56D0(void *value);
void func_0B5410(void);
int func_12EC18(void *p);
void func_0B45C8(int a);
int func_12F8E8(void);
void func_0A4A08(void);
void func_028D28(void);

void func_0D0DA8(void)
{
    func_0B56D0(D_001E332C->w1C68);
    func_0B5410();
    if (D_001F3969 != 0) {
        func_12EC18(D_002096F0);
    }
    func_0B45C8(7);
    func_12F8E8();
    func_0A4A08();
    func_028D28();
}
