/* LEVEL_17:0x11D478 -- placement copy of LEVEL_16_11DA48.c: finds and claims a free matching slot in the current slot table. */
typedef struct Slot {
    unsigned int a;
    unsigned int b;
    int c;
    int pad0c;
    int state;
    int pad14[5];
} Slot;

extern unsigned int D_001C3920;
extern int D_002D2770;
extern unsigned int D_001C33B8[];
extern unsigned int D_001C33A0[];
extern Slot D_001AC1D8[][8];
extern Slot D_001ABB98[][8];
extern int func_1125C8(void);

int func_11D478(unsigned int a, unsigned int b)
{
    unsigned int cnt;
    unsigned int i;
    Slot *s;

    switch (D_001C3920) {
    case 16:
        D_002D2770 = 0;
        break;
    case 17:
        D_002D2770 = 1;
        break;
    case 19:
        D_002D2770 = 3;
        break;
    case 18:
        D_002D2770 = 4;
        break;
    }
    cnt = func_1125C8() ? D_001C33B8[D_002D2770] : D_001C33A0[D_002D2770];
    for (i = 0; i < cnt; i++) {
        s = func_1125C8() ? &D_001AC1D8[D_002D2770][i] : &D_001ABB98[D_002D2770][i];
        if ((s->a == a || s->a == 0xFFFFFFFF) && s->b == b && s->state == 0) {
            if (s->c == 2) s->state = 4;
            else s->state = 1;
            return i;
        }
    }
    return 0;
}
