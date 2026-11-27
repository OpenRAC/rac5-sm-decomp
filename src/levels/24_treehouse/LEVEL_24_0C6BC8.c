/* LEVEL_24:0x0C6BC8 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_001E4F90[];
extern char *D_001FD2A8;
extern char *D_001C4C2C;
extern State D_00201040;

extern int func_0AF8B0(int index);
extern void func_081088(unsigned int value);
extern int func_024D38(int kind, int mask);
extern void func_02CB08(int a, int b);
extern int func_02CC90(void);
extern int func_0641D0(char *object);
extern void func_0350C0(void *value);

void func_0C6BC8(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0AF8B0(7);
    func_081088(0x200);
    id = func_024D38(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_001E4F90[i];
        if (s->id_0C == id) {
            if (s->value != D_001FD2A8[0x2E0]) {
                func_02CB08(s->value, 1);
                func_02CC90();
            }
            D_001C4C2C[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_00201040;
    if (func_0641D0((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_0350C0((void *)0);
    } else if (D_001C4C2C[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_0350C0((void *)1);
    }
}
