/* LEVEL_08:0x19EB38 -- placement copy of LEVEL_01_17D030.c: clears the object's phase byte, asks func_027B50 whether the sound for the current mode is busy (-1 when it is), and stops the sound thread when the object's record key is unset or matches the active one. */
struct Rec {
    int key;
};

struct Obj {
    char pad0[0x45];
    unsigned char f45;
    unsigned char f46;
    char pad47[0xD];
    struct Rec *f54;
};

struct Snd {
    char pad0[0x1C64];
    int active;
};

extern int D_00264470;
extern struct Snd *D_0023CB2C;
extern unsigned int func_027B50(int index, unsigned int bit);
extern void SND_StopSoundThread__Fv(void);

int func_19EB38(struct Obj *o)
{
    int sel;
    int key;
    unsigned int phase;

    o->f46 = 0;
    sel = D_00264470;
    phase = o->f45;
    if (sel == 0x16) {
        sel = 3;
    } else if (sel == 0x17) {
        sel = 6;
    }
    if (func_027B50(sel * 2 + 2, phase) != 0)
        return -1;
    key = o->f54->key;
    if (key != 0 && D_0023CB2C->active != key)
        return -1;
    SND_StopSoundThread__Fv();
    return 1;
}
