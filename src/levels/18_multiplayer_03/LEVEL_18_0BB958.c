/* LEVEL_18:0x0BB958 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_001CA650[];
extern char *D_001E0428;
extern char *D_001A2F34;
extern State D_001E4410;

extern int func_0A40A8(int index);
extern void func_078CA8(unsigned int value);
extern int func_024458(int kind, int mask);
extern void func_02C388(int a, int b);
extern void func_02C510(void);
extern int func_05C148(char *object);
extern void func_036830(void *value);

void func_0BB958(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0A40A8(7);
    func_078CA8(0x200);
    id = func_024458(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_001CA650[i];
        if (s->id_0C == id) {
            if (s->value != D_001E0428[0x2E0]) {
                func_02C388(s->value, 1);
                func_02C510();
            }
            D_001A2F34[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_001E4410;
    if (func_05C148((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_036830((void *)0);
    } else if (D_001A2F34[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_036830((void *)1);
    }
}
