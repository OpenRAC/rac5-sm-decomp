/* USA LEVEL_01.REL:0x0B23A0, 428-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 30 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[4];
    int active;
    int points;
    int label;
    int color;
} Slot;

typedef struct {
    char pad00[8];
    short x;
    short padA;
    short y;
    short padE;
} Rect;

extern Slot D_00327988[4];
extern char D_002117C8[];
extern void func_0AF400(int id, int a, int b, int c, unsigned int field, float f0, float f1, float f2, float f3);
extern void func_0A8C90(int color);
extern void func_0A8CA0(unsigned int color);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AE708(int id, Rect *r, float f);
extern void func_0AAEA0(short x, short y, char *s);
extern void func_0AD520(int label, Rect *r, unsigned int color);

static __inline__ void Fx(int id, int a)
{
    func_0AF400(id, a, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
}

void func_0B23A0(void)
{
    Rect r;
    char buf[16];
    unsigned int i;
    int color;

    i = 0;
    do {
        if (D_00327988[i].active != 0) {
            color = D_00327988[i].color;
            Fx(i + 0x307, 0);
            Fx(i + 0x30B, 0);
            func_0A8C90(color);
            Fx(i + 0x30F, 4);
            func_0A8CA0(0xFFFFFFFF);
            sprintf(buf, D_002117C8, D_00327988[i].points);
            func_0AE708(i + 0x3A, &r, 0.0f);
            func_0AAEA0(r.x, r.y, buf);
            func_0AE708(i + 0x36, &r, 0.0f);
            func_0AD520(D_00327988[i].label, &r, 0xFFFFFFFF);
        }
        i++;
    } while (i < 4);
}
