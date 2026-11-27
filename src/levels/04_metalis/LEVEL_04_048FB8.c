/* LEVEL_04:0x048FB8 -- placement copy of LEVEL_01_047598.c: handles the interact button: arms an action on the held object or starts the pickup effect, then arms the follow-up when ready. */

struct Rec047598 {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

extern char *D_0020D12C;
extern struct Rec047598 *D_0020DAD4;

extern void func_03D8C0(char *o, int a);
extern int func_024D68(int value, int other);
extern int func_023948(char *o);
extern void func_083E30(int a, struct Rec047598 *r, int c, int d, int e, int f, int g, int h, float x, float y, float z, float w);
extern int func_0237B8(char *o);
extern int func_0237F0(char *o);
extern int func_188388(char *h);
extern unsigned int func_067618(char *o, unsigned int v);

static __inline__ void follow_047598(char *a0, unsigned int *pad, unsigned char ok)
{
    int s0;
    char *h;

    if (ok == 0) {
        return;
    }
    s0 = func_0237B8(a0);
    func_0237F0(a0);
    if (s0 != 7) {
        return;
    }
    if ((*(int *)(D_0020D12C + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000)) {
        h = *(char **)(a0 + 0x5A4);
        if (h != 0) {
            if (func_188388(h) != 0) {
                if (func_067618(a0, func_188388(*(char **)(a0 + 0x5A4))) != 0) {
                    *(unsigned char *)(a0 + 0x9CF) = 1;
                }
            }
        }
    }
}

void func_048FB8(char *o, int a)
{
    unsigned int *pad;
    struct Rec047598 *r;
    int h;

    pad = (unsigned int *)(o + 0xC0);
    if (pad != 0) {
        if (a != 0 && *(int *)(o + 0x5A4) == 0 &&
            ((*(int *)(D_0020D12C + 0x24) == 2) ? (pad[5] & 0x2200) : (pad[5] & 0x2000))) {
            func_03D8C0(o, 1);
        } else if (D_0020DAD4 != 0 && *(int *)(o + 0x5A4) != 0 &&
                   ((*(int *)(D_0020D12C + 0x24) == 2) ? (pad[6] & 0x2200) : (pad[6] & 0x2000))) {
            if (func_024D68(*(int *)(o + 0x9A0), -1) != 0 && func_023948(o) == 0) {
                r = D_0020DAD4;
                h = *(int *)(o + 0x5A4);
                if (r != 0) {
                    func_083E30(h, r, 0, 0, 0, 0, 0, 1,
                                r->f14, r->f18, r->f1C, r->f20);
                }
            }
        }
        if (a != 0 && *(int *)(o + 0x5A4) != 0) {
            follow_047598(o, pad, *(unsigned char *)(o + 0x9CD) != 0 && *(int *)(o + 0x9A0) != 1);
        }
    }
}
