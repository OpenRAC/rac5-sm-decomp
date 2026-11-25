/* LEVEL_05:0x022CE0 -- placement copy of LEVEL_01_023D48.c: switches the record between its two states: with the flag set, leaves state 12 for state 2 and restarts the state helper; otherwise enters state 12, releasing the linked part and clearing the record's counters, flag bit and byte. */
typedef struct Rec Rec;

struct Rec {
    char pad_000[0x5A4];
    int link;
    char pad_5A8[0x960 - 0x5A8];
    long long flags;
    char pad_968[0x9A4 - 0x968];
    int w9A4;
    char pad_9A8[0x9C0 - 0x9A8];
    int w9C0;
    int state;
    char pad_9C8[0x9CD - 0x9C8];
    unsigned char b9CD;
};

typedef struct {
    char pad_00[0x64];
    unsigned int flags;
} Part;

extern void func_0220E8(Rec *r, float t);
extern void func_079CF8(Part *p, int mode);
extern void func_079E58(Part *p);

void func_022CE0(Rec *r, int mode)
{
    Part *part;

    if (mode != 0) {
        if (r->state == 12) {
            r->state = 2;
            func_0220E8(r, 0.0f);
        }
    } else {
        if (r->state != 12) {
            part = (Part *)r->link;
            r->state = 12;
            if (part != 0) {
                func_079CF8(part, 1);
                if ((part->flags & 6) != 0) {
                    func_079E58(part);
                }
                r->link = 0;
            }
            r->w9A4 = 0;
            r->w9C0 = 0;
            r->b9CD = 0;
            r->flags &= -8796093022209LL;
        }
    }
}
