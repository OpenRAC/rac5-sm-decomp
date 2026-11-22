/* USA LEVEL_02.REL:0x17B9E8, 556-byte candidate (22 November 2026).
 * Measured pinned: 24 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Cfg {
    char pad_00[0x14];
    int w14;
    float timer;
} Cfg;

typedef struct Obj {
    char pad_00[0x30];
    float height;
    char pad_34[0x11];
    unsigned char b45;
    char pad_46[0xE];
    Cfg *cfg;
} Obj;

extern int func_027BF0(int a, int b);
extern void func_027C68(int a, int b, int c);
extern int func_01ACB0(void);
extern int func_08B060(int a, int b);
extern void func_08E718(int a);
extern void func_001088(int a, void (*cb)(void), Obj *o);
extern void func_001370(void);
extern void func_003008(void);
extern void func_17BC70(Obj *o);

void func_17B9E8(Obj *o)
{
    Cfg *cfg;
    int w;
    float t;
    float t2;
    float h;

    cfg = o->cfg;
    if (o->b45 == 0) {
        w = cfg->w14;
        func_027BF0(0x19, 0xFF);
        if (w == 0) {
            return;
        }
        if (func_08B060(w, func_01ACB0()) == 0) {
            return;
        }
        if (func_027BF0(0x19, 0xFF) != 1) {
            cfg->timer = 0.0f;
            o->b45 = 1;
            func_08E718(0);
            func_001088(0, func_001370, o);
        } else {
            o->b45 = 2;
        }
        return;
    }
    if (o->b45 == 1) {
        func_17BC70(o);
        cfg->timer = cfg->timer + 0.0099998005f;
        if (cfg->timer > 1.2f) {
            func_001088(0, func_003008, 0);
            func_08E718(2);
            o->b45 = 2;
            o->height = 98.0f;
            func_027C68(0x19, 1, 0xFF);
            return;
        }
        func_001088(0, func_001370, o);
        if (cfg->timer > 0.2f) {
            t = cfg->timer - 0.2f;
            if (t <= 0.0001f) {
                h = 98.0f;
            } else if (t >= 0.999f) {
                h = 91.0f;
            } else {
                t2 = t * t;
                h = (t2 * -2.0f * t + t2 * 3.0f) * -7.0f + 98.0f;
            }
        } else {
            h = 98.0f;
        }
        o->height = h;
    }
    func_17BC70(o);
}
