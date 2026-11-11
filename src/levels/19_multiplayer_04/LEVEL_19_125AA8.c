/* LEVEL_19:0x125AA8 -- placement copy of LEVEL_16_125140.c: when a global flag is set and a probe returns 1, formats a label and draws it. */
int func_1135A8(void);
int func_09CA28(int a, int b, float c);
void func_09B458(int a, int b, int c, int d, int e, int f);
void func_096BF0(int a);
void func_099078(int a, int b, char *c, float d, float e);
int sprintf(char *buf, const char *fmt, ...);
extern int D_001BE624;
extern int D_002E2C20;
extern char D_001D1558[];

void func_125AA8(void)
{
    char buf[256];
    int s0;

    if (D_001BE624 == 0) {
        return;
    }
    if (func_1135A8() != 1) {
        return;
    }
    s0 = (D_001BE624 << 24) | 0x00FFFFFF;
    func_09CA28(7, s0, 0.0f);
    func_09B458(0x12, 0x1CA, 0x12, 0x1C, 0x16, s0);
    sprintf(buf, D_001D1558, D_002E2C20);
    func_096BF0(s0);
    func_099078(0x1AC, 0x10, buf, 0.75f, 0.75f);
}
