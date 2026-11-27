/* LEVEL_01:0x047598 -- handles the interact button: arms an action on the held object or starts the pickup effect, then arms the follow-up when ready. */

struct Rec047598 {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

extern char *D_001F3FAC;
extern struct Rec047598 *D_001F4614;

extern void func_03BEC0(char *o, int a);
extern int func_0250E8(int value, int other);
extern int func_023CC8(char *o);
extern void func_0809D0(int a, struct Rec047598 *r, int c, int d, int e, int f, int g, int h, float x, float y, float z, float w);
extern int func_023B38(char *o);
extern int func_023B70(char *o);
extern int func_17CB10(char *h);
extern unsigned int func_065BB0(char *o, unsigned int v);

static __inline__ void follow_047598(char *a0, unsigned int *pad, unsigned char ok)
{
    int s0;
    char *h;

    if (ok == 0) {
        return;
    }
    s0 = func_023B38(a0);
    func_023B70(a0);
    if (s0 != 7) {
        return;
    }
    if ((*(int *)(D_001F3FAC + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000)) {
        h = *(char **)(a0 + 0x5A4);
        if (h != 0) {
            if (func_17CB10(h) != 0) {
                if (func_065BB0(a0, func_17CB10(*(char **)(a0 + 0x5A4))) != 0) {
                    *(unsigned char *)(a0 + 0x9CF) = 1;
                }
            }
        }
    }
}

void func_047598(char *o, int a)
{
    unsigned int *pad;
    struct Rec047598 *r;
    int h;

    pad = (unsigned int *)(o + 0xC0);
    if (pad != 0) {
        if (a != 0 && *(int *)(o + 0x5A4) == 0 &&
            ((*(int *)(D_001F3FAC + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000))) {
            func_03BEC0(o, 1);
        } else if (D_001F4614 != 0 && *(int *)(o + 0x5A4) != 0 &&
                   ((*(int *)(D_001F3FAC + 0x24) == 2) ? (pad[6] & 0x2200) : (pad[6] & 0x2000))) {
            if (func_0250E8(*(int *)(o + 0x9A0), -1) != 0 && func_023CC8(o) == 0) {
                r = D_001F4614;
                h = *(int *)(o + 0x5A4);
                if (r != 0) {
                    func_0809D0(h, r, 0, 0, 0, 0, 0, 1,
                                r->f14, r->f18, r->f1C, r->f20);
                }
            }
        }
        if (a != 0 && *(int *)(o + 0x5A4) != 0) {
            follow_047598(o, pad, *(unsigned char *)(o + 0x9CD) != 0 && *(int *)(o + 0x9A0) != 1);
        }
    }
}
