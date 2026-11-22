/* USA LEVEL_01.REL:0x134158, 508-byte candidate (22 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float fade;
    char pad04[0x824 - 4];
} Marker;

extern Marker D_0038EE34[];
extern unsigned int D_001F3FB8;

extern int func_134128(unsigned int id);
extern int func_133FC0(unsigned int id);
extern void func_0AD260(int a, int *rect, int arg);
extern void func_0AD2E0(float one, float two, float scale, int sprite, int x, int y, int c0, int c1, int c2, int c3);

int func_134158(unsigned int id, int *rect, int arg)
{
    Marker *m;
    int ok;
    int x;
    int y;
    int col;
    float fade;
    float f;

    if (rect == 0) {
        return 0;
    }
    m = &D_0038EE34[id];
    ok = 1;
    if (func_134128(id) == 6) {
        m->fade = m->fade + 0.083333336f;
        if (1.0f < m->fade) {
            m->fade = 1.0f;
        }
    } else {
        m->fade = m->fade - 0.083333336f;
        if (m->fade < 0.0f) {
            m->fade = 0.0f;
        }
    }
    if (func_134128(id) != 5) {
        ok = 0;
    }
    if (!(id < 7)) {
        ok = 0;
    }
    if (ok != 0) {
        func_0AD260(func_133FC0(id), rect, arg);
    }
    fade = m->fade;
    if (fade != 0.0f) {
        x = (rect[0] + rect[2]) / 2;
        y = (rect[3] + rect[1]) / 2;
        f = (float)D_001F3FB8;
        col = ((int)(fade * 255.0f) << 24) | 0xFFFFFF;
        func_0AD2E0(1.0f, 1.0f, f * 8.0f / 30.0f, 0x30, (short)x, (short)y, col, col, col, col);
    }
    return ok;
}
