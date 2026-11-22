/* USA LEVEL_01.REL:0x0B39F8, 572-byte candidate (22 November 2026).
 * Measured pinned -mno-check-zero-division: 25 differing words; first
 * difference at 0x13C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Ctx {
    char pad_00[0x14];
    int w14;
} Ctx;

typedef struct Entry {
    char pad_00[0x20];
    unsigned int flags;
    char pad_24[0x30];
} Entry;

typedef struct Fade {
    int w0;
    float f4;
    float f8;
    unsigned char bC;
    char pad_0D[3];
} Fade;

extern Ctx *D_001F3FAC;
extern char *D_001FC2D8[];
extern int D_001FC2D0[];
extern int D_001FC308[];
extern int D_001FC2B8[];
extern int D_001FC2C0[];
extern unsigned char D_001FC300[];
extern unsigned char D_001FC2F8[];
extern Entry D_00327B50[];
extern Fade D_00327C60[];

extern unsigned int strlen(char *s);
extern int func_0B3738(void);
extern char *func_1323B8(char *name);
extern void func_0B3580(int slot);
extern void func_0B6020(int a);
extern void func_18D4A0(char *p);

int func_0B39F8(int slot, char *owner, char *name, unsigned int ttl)
{
    unsigned char *used;
    unsigned int len;
    int ok;
    char *str;
    unsigned int old;
    int keep;

    used = (unsigned char *)((int)D_001F3FAC + 0x1960 - (int)name);
    if (*used != 0) {
        return 0;
    }
    *used = 1;
    ok = func_0B3738();
    if (ok != 0) {
        str = func_1323B8(name);
        D_001FC2D8[slot] = str;
        if (ttl == 0xFFFFFFFFU) {
            len = strlen(str);
            D_001FC2D0[slot] = (int)((float)(len / 5 * 30) * 0.016667f * 30.0f);
        } else {
            D_001FC2D0[slot] = ttl;
        }
        old = D_00327B50[slot].flags;
        keep = D_001FC2B8[slot];
        D_001FC308[slot] = (int)name;
        D_00327B50[slot].flags = old | 3;
        D_001FC300[slot] = 1;
        D_001FC2C0[slot] = keep;
        D_001FC2F8[slot] = 1;
        func_0B3580(slot);
        D_00327C60[slot].w0 = 0;
        D_00327C60[slot].bC = 0;
        D_00327C60[slot].f4 = 1.0f;
        D_00327C60[slot].f8 = 0.1f;
        if (D_001FC2F8[slot] != 0) {
            D_001FC2F8[slot] = 0;
            func_0B6020(3);
        }
    }
    if (owner != 0) {
        if (D_001F3FAC->w14 != 0) {
            func_18D4A0(owner);
        }
    }
    return 1;
}
