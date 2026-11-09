/* LEVEL_21:0x0B2E40 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_00148C2C;
extern unsigned char D_00159269;
extern void *D_0016EF70;

void func_097638(void *value);
void func_097378(void);
void func_0F2168(void *p);
void func_096530(int a);
int func_0F2E38(void);
void func_086D10(void);
void func_023888(void);

void func_0B2E40(void)
{
    func_097638(D_00148C2C->w1C68);
    func_097378();
    if (D_00159269 != 0) {
        func_0F2168(D_0016EF70);
    }
    func_096530(7);
    func_0F2E38();
    func_086D10();
    func_023888();
}
