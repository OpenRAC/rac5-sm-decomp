/* LEVEL_19:0x11E3B8 -- placement copy of LEVEL_18_11CB08.c: placement copy of LEVEL_16_11DA48.c: finds and claims a free matching slot in the current slot table. */
typedef struct Slot {
    unsigned int a;
    unsigned int b;
    int c;
    int pad0c;
    int state;
    int pad14[5];
} Slot;

extern unsigned int D_001D16A0;
extern int D_002E15F0;
extern unsigned int D_001D1138[];
extern unsigned int D_001D1120[];
extern Slot D_001B9D58[][8];
extern Slot D_001B9718[][8];
extern unsigned int func_1135E0(void);

int func_11E3B8(unsigned int a, unsigned int b)
{
    unsigned int cnt;
    unsigned int i;
    Slot *s;

    switch (D_001D16A0) {
    case 16:
        D_002E15F0 = 0;
        break;
    case 17:
        D_002E15F0 = 1;
        break;
    case 19:
        D_002E15F0 = 3;
        break;
    case 18:
        D_002E15F0 = 4;
        break;
    }
    cnt = func_1135E0() ? D_001D1138[D_002E15F0] : D_001D1120[D_002E15F0];
    for (i = 0; i < cnt; i++) {
        s = func_1135E0() ? &D_001B9D58[D_002E15F0][i] : &D_001B9718[D_002E15F0][i];
        if ((s->a == a || s->a == 0xFFFFFFFF) && s->b == b && s->state == 0) {
            if (s->c == 2) s->state = 4;
            else s->state = 1;
            return i;
        }
    }
    return 0;
}
