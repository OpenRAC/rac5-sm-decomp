/* LEVEL_15:0x134BE0 -- advances a playback state machine from a timing comparison. */
struct S {
    char pad[0x13C];
    int prev;
    int cur;
    float t;
};
extern struct S D_002F4F88;
extern int func_1345E8(void);
extern float func_1347B0(void);
extern float func_134760(int id);
extern void func_134680(float v, float w);
extern int func_134868(void);
extern void func_1345F8(int id, float v);

void func_134BE0(void)
{
    int id;
    float a;
    float b;
    float t;

    id = func_1345E8();
    if (id == -1) {
        a = 0.0f;
        b = 0.0f;
    } else {
        a = func_1347B0();
        b = func_134760(id);
    }
    if (D_002F4F88.cur != -1) {
        t = D_002F4F88.t;
        if (b - t <= a + 0.03333333507180214f) {
            a = 0.0f;
            if (a < t) {
                func_134680(a, t);
            } else if (D_002F4F88.prev != D_002F4F88.cur || func_134868() == 0) {
                func_1345F8(D_002F4F88.cur, a);
            }
        }
    } else if (b <= a + 0.03333333507180214f) {
        D_002F4F88.prev = D_002F4F88.cur;
    }
}
