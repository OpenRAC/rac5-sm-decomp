/* LEVEL_10:0x0CE6C0 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_0021D190[];
extern char *D_0023A7A8;
extern char *D_001FCFAC;
extern State D_0023E540;

extern int func_0B71F8(int index);
extern void func_088150(unsigned int value);
extern int func_026CE8(int kind, int mask);
extern void func_02F450(int a, int b);
extern int func_02F5D8(void);
extern int func_0699B0(char *object);
extern void func_03A720(void *value);

void func_0CE6C0(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0B71F8(7);
    func_088150(0x200);
    id = func_026CE8(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_0021D190[i];
        if (s->id_0C == id) {
            if (s->value != D_0023A7A8[0x2E0]) {
                func_02F450(s->value, 1);
                func_02F5D8();
            }
            D_001FCFAC[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_0023E540;
    if (func_0699B0((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_03A720((void *)0);
    } else if (D_001FCFAC[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_03A720((void *)1);
    }
}
