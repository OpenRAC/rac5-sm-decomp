/* LEVEL_20:0x0F7240 -- placement copy of LEVEL_16_125140.c: when a global flag is set and a probe returns 1, formats a label and draws it. */
int func_0E5970(void);
int func_087890(int a, int b, float c);
void func_0862C0(int a, int b, int c, int d, int e, int f);
void func_081A58(int a);
void func_083EE0(int a, int b, char *c, float d, float e);
int sprintf(char *buf, const char *fmt, ...);
extern int D_0011FB4C;
extern int D_00205FE0;
extern char D_001313C8[];

void func_0F7240(void)
{
    char buf[256];
    int s0;

    if (D_0011FB4C == 0) {
        return;
    }
    if (func_0E5970() != 1) {
        return;
    }
    s0 = (D_0011FB4C << 24) | 0x00FFFFFF;
    func_087890(7, s0, 0.0f);
    func_0862C0(0x12, 0x1CA, 0x12, 0x1C, 0x16, s0);
    sprintf(buf, D_001313C8, D_00205FE0);
    func_081A58(s0);
    func_083EE0(0x1AC, 0x10, buf, 0.75f, 0.75f);
}
