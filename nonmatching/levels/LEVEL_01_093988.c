/* USA LEVEL_01.REL:0x093988, 296-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 19 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void *memset(void *, int, unsigned int);

typedef struct {
    char pad00[0x20];
    float f20;
} Slot;

extern void func_096948(void *req, unsigned int word, void (*cb0)(void), int size, int a, int b, void (*cb1)(void));
extern int func_096C60(void *req);
extern Slot *func_097738(int h, int h2);
extern Slot *func_097658(int *ok, int h, int a);
extern void func_091AF8(void);
extern void func_091760(void);

Slot *func_093988(int kind, int mode, unsigned short id, int flag)
{
    char req[0x10];
    int ok[4];
    unsigned int word;
    int idx;
    int v;
    int h;
    Slot *s;

    if (kind == 4) {
        idx = 9;
    } else {
        v = 3;
        if (!(2 < kind)) {
            v = kind;
        }
        if (!(-1 < v)) {
            v = 0;
        }
        idx = 0x13 - v;
    }
    word = (idx << 27) | (id << 16) | ((mode == 0) << 15) | (mode << 6) | 0x7000 | 5;
    func_096948(req, word, func_091AF8, 0x6C, 1, -1, func_091760);
    h = func_096C60(req);
    if (h == -1) {
        return 0;
    }
    if (flag == 1) {
        s = func_097738(h, h);
        if (s == 0) {
            return 0;
        }
    } else {
        s = func_097658(ok, h, 1);
        if (ok[0] == 0) {
            return 0;
        }
    }
    memset(s, 0, 0x6C);
    s->f20 = 1.0f;
    return s;
}
