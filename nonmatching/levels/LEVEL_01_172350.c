/* USA LEVEL_01.REL:0x172350, 292-byte candidate (21 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Hooks {
    char pad_00[0xDC];
    void (*update)(void);
} Hooks;

typedef struct State {
    char pad_00[0x278];
    float speed;
} State;

typedef struct Sub {
    char pad_00[0x74];
} Sub;

typedef struct Game {
    char pad_00[0xF8];
    int w_F8;
} Game;

typedef struct Obj {
    char pad_00[0x48];
    Hooks *hooks;
    char pad_4C[0x58 - 0x4C];
    State *state;
    char pad_5C[0x64 - 0x5C];
    unsigned int flags;
    char pad_68[0x74 - 0x68];
    char sub[1];
} Obj;

extern void *memset(void *, int, unsigned int);
extern Game *D_001F45E4;
extern unsigned int D_002078AC;
extern unsigned int D_00297DC0;
extern char D_002212B8[];
extern char D_002212C8[];
extern void func_173700(void);
extern int func_024EA0(int a, int b);
extern void func_023838(void *p, int a, int b, int c);
extern void func_06ADB8(void *blk, void *first, void *second, int mode, float fx, float fy, float fz);

int func_172350(Obj *o)
{
    State *st = o->state;

    o->hooks->update = func_173700;
    memset(o->state, 0, 0x27C);
    if (func_024EA0(10, D_001F45E4->w_F8) != 0)
        st->speed = 12.0f;
    else
        st->speed = 3.0f;
    D_002078AC = (D_002078AC & 0xF800FFFF) | (D_00297DC0 << 16);
    func_023838(o->sub, 10, D_001F45E4->w_F8, -1);
    func_06ADB8(D_001F45E4, D_002212B8, D_002212C8, 1, 0.6f, 0.4f, 3.0f);
    o->flags |= 0x40000;
    return 1;
}
