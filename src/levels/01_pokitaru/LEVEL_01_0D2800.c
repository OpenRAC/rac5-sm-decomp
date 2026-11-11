/* LEVEL_01:0x0D2800 -- runs a fixed set of init calls, one conditional on a status byte. */
struct G22 {
    char pad0[0x1C68];
    void *w1C68;
};

extern struct G22 *D_001F3FAC;
extern unsigned char D_002045E9;
extern void *D_0021A7F0;

void func_0B7128(void *value);
void func_0B6E68(void);
int func_1332A0(void *p);
extern int func_0B6020(int index);
int func_133F70(void);
void func_0A6448(void);
void func_02A0B0(void);

void func_0D2800(void)
{
    func_0B7128(D_001F3FAC->w1C68);
    func_0B6E68();
    if (D_002045E9 != 0) {
        func_1332A0(D_0021A7F0);
    }
    func_0B6020(7);
    func_133F70();
    func_0A6448();
    func_02A0B0();
}
