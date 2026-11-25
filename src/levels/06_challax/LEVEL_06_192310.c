/* LEVEL_06:0x192310 -- placement copy of LEVEL_01_19C738.c: message callback: when the record's flag is set and its id matches the message, shows the entry's text with a positional sound and a follow-up. */
typedef struct {
    char pad00[0x3C];
    unsigned int f3C;
    int f40;
} Aux;

typedef struct {
    int id;
    unsigned int flags;
    Aux *aux;
} Rec58;

typedef struct {
    char pad00[0x18];
    unsigned char b18;
    char pad19[7];
    unsigned char b20;
} Rec54;

typedef struct {
    int id;
    int f04;
    int f08;
} Msg;

typedef struct {
    char pad00[0x30];
    float pos[9];
    Rec54 *rec54;
    Rec58 *rec58;
} Obj;

extern char D_00383B70[];
extern void *D_001F7A10;
extern unsigned int D_001E2EB8;

extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");
extern void func_0B1B10(unsigned int index, unsigned int value);
extern void func_0B1A18(int index, int value);
extern void func_022548(void *o, char *buf, int x, unsigned int kind, int n);
extern void func_1289D0(unsigned char *text, unsigned int count);
extern void func_0B37E8(void);
extern void func_0B3890(int index, char *name, int flag, int value);

void func_192310(Obj *o, Msg *msg)
{
    Rec58 *r58 = o->rec58;
    Rec54 *r54 = o->rec54;
    Aux *a = r58->aux;

    if ((r58->flags & 1) == 0) {
        return;
    }
    if (r58->id != msg->id) {
        return;
    }
    func_0B1B10(0, a->f40);
    func_0B1A18(0, 0x5A);
    ((void (*)(void *, char *, int, unsigned int, int, int))func_022548)(
        (void *)msg->id, D_00383B70, r54->b18, a->f3C, r54->b20, 0x40);
    func_1289D0((unsigned char *)D_00383B70, 0x40);
    if (D_001F7A10 != 0) {
        SND_PlayPositionalSound(D_001F7A10, o->pos, 0.0f, 0, D_001E2EB8);
    }
    func_0B37E8();
    func_0B3890(msg->f08, D_00383B70, 0, 0x5A);
}
