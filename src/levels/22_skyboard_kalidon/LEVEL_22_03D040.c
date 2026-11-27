/* LEVEL_22:0x03D040 -- placement copy of LEVEL_01_047598.c: handles the interact button: arms an action on the held object or starts the pickup effect, then arms the follow-up when ready. */

struct Rec047598 {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

extern char *D_0015332C;
extern struct Rec047598 *D_00153994;

extern void func_031A60(char *o, int a);
extern int func_01FEC8(int value, int other);
extern int func_01EC08(char *o);
extern void func_0733A8(int a, struct Rec047598 *r, int c, int d, int e, int f, int g, int h, float x, float y, float z, float w);
extern int func_01EA78(char *o);
extern int func_01EAB0(char *o);
extern int func_12AAC0(char *h);
extern unsigned int func_05B7B8(char *o, unsigned int v);

static __inline__ void follow_047598(char *a0, unsigned int *pad, unsigned char ok)
{
    int s0;
    char *h;

    if (ok == 0) {
        return;
    }
    s0 = func_01EA78(a0);
    func_01EAB0(a0);
    if (s0 != 7) {
        return;
    }
    if ((*(int *)(D_0015332C + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000)) {
        h = *(char **)(a0 + 0x5A4);
        if (h != 0) {
            if (func_12AAC0(h) != 0) {
                if (func_05B7B8(a0, func_12AAC0(*(char **)(a0 + 0x5A4))) != 0) {
                    *(unsigned char *)(a0 + 0x9CF) = 1;
                }
            }
        }
    }
}

void func_03D040(char *o, int a)
{
    unsigned int *pad;
    struct Rec047598 *r;
    int h;

    pad = (unsigned int *)(o + 0xC0);
    if (pad != 0) {
        if (a != 0 && *(int *)(o + 0x5A4) == 0 &&
            ((*(int *)(D_0015332C + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000))) {
            func_031A60(o, 1);
        } else if (D_00153994 != 0 && *(int *)(o + 0x5A4) != 0 &&
                   ((*(int *)(D_0015332C + 0x24) == 2) ? (pad[6] & 0x2200) : (pad[6] & 0x2000))) {
            if (func_01FEC8(*(int *)(o + 0x9A0), -1) != 0 && func_01EC08(o) == 0) {
                r = D_00153994;
                h = *(int *)(o + 0x5A4);
                if (r != 0) {
                    func_0733A8(h, r, 0, 0, 0, 0, 0, 1,
                                r->f14, r->f18, r->f1C, r->f20);
                }
            }
        }
        if (a != 0 && *(int *)(o + 0x5A4) != 0) {
            follow_047598(o, pad, *(unsigned char *)(o + 0x9CD) != 0 && *(int *)(o + 0x9A0) != 1);
        }
    }
}
