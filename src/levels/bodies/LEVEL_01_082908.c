/* LEVEL_01:0x082908 -- triggers the per-kind feedback pulses for an object, chosen by its type hash. */
typedef struct Def {
    char pad0[0x24];
    unsigned hash;
    char pad28[0x17];
    unsigned char kind;
} Def;

typedef struct Obj {
    char pad0[0x40];
    Def *def;
} Obj;

extern float D_001F61EC[4];
extern Obj *D_002356E0;

extern int func_02A3F0(int k);
extern void func_08C518(float f);

void func_082908(Obj *o)
{
    if ((unsigned char)(o->def->kind - 1) < 2 || o->def->hash == 0x1095D484 || o->def->hash == 0x899C853E) {
        if (func_02A3F0(3))
            func_08C518(D_001F61EC[0]);
        else if (D_001F61EC[0] > 0.0f)
            func_08C518(D_001F61EC[0]);
    }
    if (o == D_002356E0 || o->def->hash == 0x9B5CFBD6 || o->def->hash == 0xF61F2F65 ||
        o->def->hash == 0x0726ECCC || o->def->hash == 0x370B4473) {
        if (func_02A3F0(0))
            func_08C518(D_001F61EC[1]);
        else if (D_001F61EC[1] > 0.0f)
            func_08C518(D_001F61EC[1]);
    }
    if (o->def->hash == 0x86E8A1BF || o->def->hash == 0xEE2180B6) {
        if (func_02A3F0(1))
            func_08C518(D_001F61EC[2]);
        else if (D_001F61EC[2] > 0.0f)
            func_08C518(D_001F61EC[2]);
    }
    if (o->def->hash == 0x36919224) {
        if (func_02A3F0(2))
            func_08C518(D_001F61EC[3]);
        else if (D_001F61EC[3] > 0.0f)
            func_08C518(D_001F61EC[3]);
    }
}
