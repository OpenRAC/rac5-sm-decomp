/* USA LEVEL_01.REL:0x18D538, 448-byte candidate (22 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(void *, float, float);
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");

typedef struct Meta {
    char pad_00[0x14];
    unsigned char prio_14;
} Meta;

typedef struct Track {
    char pad_00[0x54];
    Meta *meta;
    char pad_58[0xC];
    unsigned int flags;
} Track;

typedef struct Stream {
    void *inst;
    char pad_04[9];
    unsigned char mix;
} Stream;

typedef struct Cur {
    char pad_00[0x58];
    Stream *stream;
} Cur;

typedef struct List {
    char pad_00[0xC];
    char *items;
    char pad_10[0x20];
    int count;
} List;

extern int D_00208700;
extern Cur *D_002085F4;

extern void func_18D3A8(List *l);
extern int func_18D0F8(Track *t);
extern void func_18D270(Cur *c);
extern int func_18D528(void);
extern void func_027AC8(float f);

void func_18D538(List *l)
{
    int best;
    Cur *cand;
    char *end;
    char *p;
    int k;
    float f;
    Stream *st;

    func_18D3A8(l);
    if (D_00208700 > 0) {
        D_00208700 = D_00208700 - 1;
        return;
    }
    best = -1;
    cand = 0;
    end = l->items + l->count * 0x80;
    for (p = l->items; p != end; p += 0x80) {
        if (!(((Track *)p)->flags & 1)) {
            continue;
        }
        if (func_18D0F8((Track *)p) == 0) {
            continue;
        }
        k = ((Track *)p)->meta->prio_14;
        if (best < k) {
            best = k;
            cand = (Cur *)p;
        } else if (k == best) {
            if (cand == D_002085F4) {
                best = k;
                cand = (Cur *)p;
            }
        }
    }
    if (cand != D_002085F4) {
        func_18D270(cand);
    }
    if (D_002085F4 == 0) {
        return;
    }
    st = D_002085F4->stream;
    if (st->inst == 0) {
        return;
    }
    if (func_18D528() != 0) {
        if (st->mix == 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff(st->inst, 1.0f, 0.4f);
            st->mix = 1;
        }
    } else {
        if (st->mix != 0) {
            SND_FadeATRACInstance__FP13ATRACInstanceff(st->inst, 1.0f, 1.0f);
            st->mix = 0;
        }
    }
    f = *(float *)((char *)st->inst + 0x68);
    if (f < 0.99f) {
        func_027AC8(f);
    }
    if (st->inst != 0) {
        if (SND_IsATRACPlaying((char *)st->inst) == 0) {
            func_18D270(D_002085F4);
        }
    }
}
