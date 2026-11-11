/* LEVEL_16:0x125140 -- when a global flag is set and a probe returns 1, formats a label and draws it. */
int func_112E00(void);
int func_09D198(int a, int b, float c);
void func_09BBC8(int a, int b, int c, int d, int e, int f);
void func_097360(int a);
void func_0997E8(int a, int b, char *c, float d, float e);
int sprintf(char *buf, const char *fmt, ...);
extern int D_001BD4AC;
extern int D_002E2AA0;
extern char D_001D0358[];

void func_125140(void)
{
    char buf[256];
    int s0;

    if (D_001BD4AC == 0) {
        return;
    }
    if (func_112E00() != 1) {
        return;
    }
    s0 = (D_001BD4AC << 24) | 0x00FFFFFF;
    func_09D198(7, s0, 0.0f);
    func_09BBC8(0x12, 0x1CA, 0x12, 0x1C, 0x16, s0);
    sprintf(buf, D_001D0358, D_002E2AA0);
    func_097360(s0);
    func_0997E8(0x1AC, 0x10, buf, 0.75f, 0.75f);
}
