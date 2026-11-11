/* LEVEL_17:0x124B68 -- placement copy of LEVEL_16_125140.c: when a global flag is set and a probe returns 1, formats a label and draws it. */
int func_112590(void);
int func_09C690(int a, int b, float c);
void func_09B0C0(int a, int b, int c, int d, int e, int f);
void func_096858(int a);
void func_098CE0(int a, int b, char *c, float d, float e);
int sprintf(char *buf, const char *fmt, ...);
extern int D_001B0AA4;
extern int D_002D3DA0;
extern char D_001C37D8[];

void func_124B68(void)
{
    char buf[256];
    int s0;

    if (D_001B0AA4 == 0) {
        return;
    }
    if (func_112590() != 1) {
        return;
    }
    s0 = (D_001B0AA4 << 24) | 0x00FFFFFF;
    func_09C690(7, s0, 0.0f);
    func_09B0C0(0x12, 0x1CA, 0x12, 0x1C, 0x16, s0);
    sprintf(buf, D_001C37D8, D_002D3DA0);
    func_096858(s0);
    func_098CE0(0x1AC, 0x10, buf, 0.75f, 0.75f);
}
