/* LEVEL_16.REL:0x125140: reviewed 188-byte candidate, held for ABI review.
 * When a global flag is set and a probe returns 1, formats a label and draws
 * it.
 * pinned C with gnu-ee-trial links 188/188 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_09BBC8 returning void with (int, int, int, int, int, int),
 * but the accepted LEVEL_16_09BBC8.c defines it returning void with (int, int,
 * int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
