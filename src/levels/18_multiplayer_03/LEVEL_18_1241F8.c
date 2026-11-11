/* LEVEL_18:0x1241F8 -- placement copy of LEVEL_16_125140.c: when a global flag is set and a probe returns 1, formats a label and draws it. */
int func_111BB8(void);
int func_09C1A8(int a, int b, float c);
void func_09ABD8(int a, int b, int c, int d, int e, int f);
void func_096370(int a);
void func_0987F8(int a, int b, char *c, float d, float e);
int sprintf(char *buf, const char *fmt, ...);
extern int D_001BE92C;
extern int D_002E2E20;
extern char D_001D18D8[];

void func_1241F8(void)
{
    char buf[256];
    int s0;

    if (D_001BE92C == 0) {
        return;
    }
    if (func_111BB8() != 1) {
        return;
    }
    s0 = (D_001BE92C << 24) | 0x00FFFFFF;
    func_09C1A8(7, s0, 0.0f);
    func_09ABD8(0x12, 0x1CA, 0x12, 0x1C, 0x16, s0);
    sprintf(buf, D_001D18D8, D_002E2E20);
    func_096370(s0);
    func_0987F8(0x1AC, 0x10, buf, 0.75f, 0.75f);
}
