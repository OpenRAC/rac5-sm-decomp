/* LEVEL_17:0x1526D8 -- object setup: bails out with -1 when the pre-check fails, otherwise clears the 0x20-byte record, marks it active with a 240.0 timer and plays the cue when the check passes; returns 1. */
typedef struct Rec {
    unsigned char active;
    char pad1[0x1B];
    float timer;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern unsigned int func_112590(void);
extern unsigned int func_1125C8(void);
extern void func_0A4D28(int cue, int a);
extern void *memset(void *, int, unsigned int);

int func_1526D8(Obj *o)
{
    Rec *r;

    if (func_112590() != 0)
        return -1;
    r = o->rec;
    memset(r, 0, 0x20);
    r->active = 1;
    r->timer = 240.0f;
    if (func_1125C8() != 0)
        func_0A4D28(0x15C, 5);
    return 1;
}
