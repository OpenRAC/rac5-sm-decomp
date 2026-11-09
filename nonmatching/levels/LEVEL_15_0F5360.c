/* LEVEL_15.REL:0x0F5360: reviewed 392-byte candidate, held for ABI review.
 * Per-frame update of a two-phase screen state: in phase 2 it draws and polls
 * a text prompt, in phase 3 it fades a counter and flashes a colour.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 392/392 bytes and is byte-
 * exact at this and 1 other USA placement, but the prototypes disagree.
 * It declares func_089608 returning void with (pointer, int, int, int, int),
 * but the accepted LEVEL_15_089608.c defines it returning int with (pointer,
 * int, pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Q0F5360 {
    char pad0[0x24];
    int w24;
};

struct G0F5360 {
    char pad0[0x44040];
    int state;
    float f4044;
    char pad4048[0x28];
    float f4070;
    char pad4074[0xF8];
    struct Q0F5360 *q;
};

extern struct G0F5360 D_002A8B58;
extern char D_002A8AC0[];

extern float ceilf(float x);
extern void func_1372F0(void);
extern int func_0001A8(int a);
extern int func_000200(int a);
extern int func_0F1378(int a);
extern void func_089608(char *p, int id, int a, int b, int c);
extern void func_0B7590(int a, char *p, int b, int c);
extern int func_0B7098(void);
extern void func_0868C8(int a, unsigned int b, unsigned char c, int d, int e, int f);
extern void func_0F5310(void);

void func_0F5360(void)
{
    D_002A8B58.f4070 = 0.0f;
    switch (D_002A8B58.state) {
    case 2:
        func_1372F0();
        func_089608(D_002A8AC0, 0x40B, func_0F1378(func_0001A8(D_002A8B58.q->w24)), func_0F1378(func_000200(D_002A8B58.q->w24)), 0);
        func_0B7590(1, D_002A8AC0, func_0F1378(0x21A), 0);
        if (func_0B7098() == 1) {
            D_002A8B58.state = 0;
        }
        break;
    case 3:
        func_1372F0();
        D_002A8B58.f4070 = 1.0f - D_002A8B58.f4044 / 90.0f;
        func_0868C8(0, 0xFFFFFFFF, (int)ceilf(255.0f / 90.0f), 0x20, 3, 0);
        D_002A8B58.f4044 = D_002A8B58.f4044 - 1.0f;
        if (D_002A8B58.f4044 < 0.0f) {
            func_0F5310();
        }
        break;
    case 1:
        break;
    }
}
