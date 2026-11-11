/* LEVEL_07:0x0D4860 -- placement copy of LEVEL_01_0D2800.c: runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_002082AC;
extern unsigned char D_002188E9;
extern void *D_0022F4F0;

void func_0B9188(void *value);
void func_0B8EC8(void);
int func_1362A0(void *p);
void func_0B8080(int a);
int func_136F70(void);
void func_0A8448(void);
void func_02A3F0(void);

void func_0D4860(void)
{
    func_0B9188(D_002082AC->w1C68);
    func_0B8EC8();
    if (D_002188E9 != 0) {
        func_1362A0(D_0022F4F0);
    }
    func_0B8080(7);
    func_136F70();
    func_0A8448();
    func_02A3F0();
}
