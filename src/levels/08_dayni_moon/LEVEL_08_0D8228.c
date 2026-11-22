/* LEVEL_08:0x0D8228 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
typedef unsigned long long u64;

typedef struct {
    int value;
    char pad_04[8];
    unsigned char id_0C;
    char pad_0D[3];
} Slot;

typedef struct {
    char pad_00[0x74];
    unsigned short s_74;
} Aux;

typedef struct {
    char pad_000[0x10C];
    unsigned short h_10C;
    char pad_10E[0x852];
    u64 flags_960;
} State;

typedef struct {
    char pad_000[0x59C];
    Aux *aux_59C;
} Ctx;

extern Slot D_0025DE90[];
extern char *D_00280628;
extern char *D_0023CB2C;
extern State D_002843D0;

extern int func_0C0F10(int index);
extern void func_08FE38(unsigned int value);
extern int func_027A30(int kind, int mask);
extern void func_02FD40(int a, int b);
extern void func_02FEC8(void);
extern int func_0703C8(char *object);
extern void func_041120(void *value);

void func_0D8228(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0C0F10(7);
    func_08FE38(0x200);
    id = func_027A30(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_0025DE90[i];
        if (s->id_0C == id) {
            if (s->value != D_00280628[0x2E0]) {
                func_02FD40(s->value, 1);
                func_02FEC8();
            }
            D_0023CB2C[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_002843D0;
    if (func_0703C8((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_041120((void *)0);
    } else if (D_0023CB2C[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_041120((void *)1);
    }
}
