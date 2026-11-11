/* LEVEL_16:0x11DA48 -- finds and claims a free matching slot in the current slot table. */
typedef struct Slot {
    unsigned int a;
    unsigned int b;
    int c;
    int pad0c;
    int state;
    int pad14[5];
} Slot;

extern unsigned int D_001D04A0;
extern int D_002E1470;
extern unsigned int D_001CFF38[];
extern unsigned int D_001CFF20[];
extern Slot D_001B8BE0[][8];
extern Slot D_001B85A0[][8];
extern int func_112E38(void);

int func_11DA48(unsigned int a, unsigned int b)
{
    unsigned int cnt;
    unsigned int i;
    Slot *s;

    switch (D_001D04A0) {
    case 16:
        D_002E1470 = 0;
        break;
    case 17:
        D_002E1470 = 1;
        break;
    case 19:
        D_002E1470 = 3;
        break;
    case 18:
        D_002E1470 = 4;
        break;
    }
    cnt = func_112E38() ? D_001CFF38[D_002E1470] : D_001CFF20[D_002E1470];
    for (i = 0; i < cnt; i++) {
        s = func_112E38() ? &D_001B8BE0[D_002E1470][i] : &D_001B85A0[D_002E1470][i];
        if ((s->a == a || s->a == 0xFFFFFFFF) && s->b == b && s->state == 0) {
            if (s->c == 2) s->state = 4;
            else s->state = 1;
            return i;
        }
    }
    return 0;
}
