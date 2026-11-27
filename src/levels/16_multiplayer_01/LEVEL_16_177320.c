/* LEVEL_16:0x177320 -- rebases the resource offsets of a freshly placed object; when the first check fails it releases the object, otherwise it starts the looping sound and the effect. */
typedef struct Res {
    char pad_00[0x40];
    int field_40;
    char pad_44[0x20];
    unsigned int flags;
} Res;

typedef struct Rec {
    int first;
    int second;
    int third;
    int fourth;
    int w10;
    int w14;
    int w18;
    int w1C;
    int w20;
    unsigned char b24;
    char pad25[3];
    int w28;
    char pad2C[0x1C];
    int w48;
    int w4C;
} Rec;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0xE];
    Rec *rec;
} Obj;

extern int D_001B48A4;

extern unsigned int func_112E00(void);
extern int func_112E48(void);
extern void func_0176D8(char *a0);
extern void func_06F940(int a);
extern void func_1784C0();
extern void func_159930(float f, int a, int b, Obj *o, int c, int d, void *fn, int e);
extern int func_11DA48(unsigned int a, unsigned int b);
extern void func_11D978(float a, float b, int h);
extern void func_177888(void);

static __inline__ int Reloc(int *slot)
{
    int off = *slot;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        *slot = D_001B48A4 + off;
        ok = 1;
    }
    return ok;
}

static __inline__ int Fixup(int *slot)
{
    Res *res;

    if (*slot == 0)
        return 0;
    res = (Res *)(D_001B48A4 + *slot);
    if (res->field_40 == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)res;
    return 1;
}

int func_177320(Obj *self)
{
    Rec *rec = self->rec;
    int v;

    if (!Fixup(&rec->first))
        return 0;
    if (!Fixup(&rec->second))
        return 0;
    if (!Fixup(&rec->third))
        return 0;
    if (!Fixup(&rec->fourth))
        return 0;
    if (!Reloc(&rec->w10))
        return 0;
    if (!Reloc(&rec->w14))
        return 0;
    if (!Reloc(&rec->w18))
        return 0;
    if (!Fixup(&rec->w4C))
        return 0;
    if (func_112E00() != 0) {
        if ((((Res *)rec->fourth)->flags & 1) != 0)
            ((void (*)(int a, int b))func_06F940)(rec->fourth, 1);
        else
            func_0176D8((char *)rec->fourth);
        func_1784C0(self);
        return -1;
    }
    if (rec->b24 != 0) {
        if (func_112E48() == 0) {
            if (rec->w1C != 0)
                goto done;
        }
        func_159930(1.2f, rec->w4C, rec->w1C, self, rec->first + 0x30, 0x50, func_177888, rec->w20);
        rec->w48 = func_11DA48(rec->w1C, 3);
        func_11D978(0.0f, 1.0f, rec->w48);
    }
done:
    self->state = 1;
    return 1;
}
