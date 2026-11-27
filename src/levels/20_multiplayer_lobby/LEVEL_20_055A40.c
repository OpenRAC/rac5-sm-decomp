/* LEVEL_20:0x055A40 -- placement copy of LEVEL_16_05C418.c: state step: starts state 2 when the timer has run out, or forwards the previous index. */
typedef struct {
    char pad0[0xF4];
    int fF4;
    char padF8[0x9A0 - 0xF8];
    int f9A0;
    char pad9A4[0xE7C - 0x9A4];
    int fE7C;
    char padE80[0xEFC - 0xE80];
    float fEFC;
    char padF00[0xF10 - 0xF00];
    unsigned long long fF10;
    char padF18[0xF44 - 0xF18];
    float fF44;
    float fF48;
    char padF4C[4];
    float fF50;
    char padF54[0xF5C - 0xF54];
    float fF5C;
    float fF60;
} S;
extern int func_042A48(S *s, float t, int state);
extern void func_067520(int a);

void func_055A40(S *s)
{
    int v = s->fE7C;
    if (v != 2) {
        if (v < 3) {
            if (v == 1) {
                if (s->fF44 <= 0.0f) {
                    s->fE7C = 2;
                    s->fF10 |= 2;
                    s->fF48 = -0.16666667163372040f;
                    s->fEFC = -0.5f;
                    s->fF44 = 1.0f;
                    s->fF50 = 1.0f;
                    s->fF5C = 1.0f;
                    s->fF60 = 0.800000011920929f;
                    func_042A48(s, 0.0f, 0);
                }
            }
        }
    } else {
        if (s->f9A0 != 9)
            func_067520(s->fF4 - 1);
    }
}
