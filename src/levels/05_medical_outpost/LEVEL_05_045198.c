/* LEVEL_05:0x045198 -- placement copy of LEVEL_01_047598.c: handles the interact button: arms an action on the held object or starts the pickup effect, then arms the follow-up when ready. */

struct Rec047598 {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

extern char *D_001E332C;
extern struct Rec047598 *D_001E3994;

extern void func_039AA0(char *o, int a);
extern int func_024080(int value, int other);
extern int func_022C60(char *o);
extern void func_07E070(int a, struct Rec047598 *r, int c, int d, int e, int f, int g, int h, float x, float y, float z, float w);
extern int func_022AD0(char *o);
extern int func_022B08(char *o);
extern int func_16E760(char *h);
extern unsigned int func_063818(char *o, unsigned int v);

static __inline__ void follow_047598(char *a0, unsigned int *pad, unsigned char ok)
{
    int s0;
    char *h;

    if (ok == 0) {
        return;
    }
    s0 = func_022AD0(a0);
    func_022B08(a0);
    if (s0 != 7) {
        return;
    }
    if ((*(int *)(D_001E332C + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000)) {
        h = *(char **)(a0 + 0x5A4);
        if (h != 0) {
            if (func_16E760(h) != 0) {
                if (func_063818(a0, func_16E760(*(char **)(a0 + 0x5A4))) != 0) {
                    *(unsigned char *)(a0 + 0x9CF) = 1;
                }
            }
        }
    }
}

void func_045198(char *o, int a)
{
    unsigned int *pad;
    struct Rec047598 *r;
    int h;

    pad = (unsigned int *)(o + 0xC0);
    if (pad != 0) {
        if (a != 0 && *(int *)(o + 0x5A4) == 0 &&
            ((*(int *)(D_001E332C + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000))) {
            func_039AA0(o, 1);
        } else if (D_001E3994 != 0 && *(int *)(o + 0x5A4) != 0 &&
                   ((*(int *)(D_001E332C + 0x24) == 2) ? (pad[6] & 0x2200) : (pad[6] & 0x2000))) {
            if (func_024080(*(int *)(o + 0x9A0), -1) != 0 && func_022C60(o) == 0) {
                r = D_001E3994;
                h = *(int *)(o + 0x5A4);
                if (r != 0) {
                    func_07E070(h, r, 0, 0, 0, 0, 0, 1,
                                r->f14, r->f18, r->f1C, r->f20);
                }
            }
        }
        if (a != 0 && *(int *)(o + 0x5A4) != 0) {
            follow_047598(o, pad, *(unsigned char *)(o + 0x9CD) != 0 && *(int *)(o + 0x9A0) != 1);
        }
    }
}
