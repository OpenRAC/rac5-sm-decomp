/* LEVEL_03:0x082788 -- placement copy of LEVEL_01_082908.c: triggers the per-kind feedback pulses for an object, chosen by its type hash. */
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

extern float D_0020E86C[4];
extern Obj *D_00250560;

extern int func_02A1E8(int k);
extern void func_08C320(float f);

void func_082788(Obj *o)
{
    if ((unsigned char)(o->def->kind - 1) < 2 || o->def->hash == 0x1095D484 || o->def->hash == 0x899C853E) {
        if (func_02A1E8(3))
            func_08C320(D_0020E86C[0]);
        else if (D_0020E86C[0] > 0.0f)
            func_08C320(D_0020E86C[0]);
    }
    if (o == D_00250560 || o->def->hash == 0x9B5CFBD6 || o->def->hash == 0xF61F2F65 ||
        o->def->hash == 0x0726ECCC || o->def->hash == 0x370B4473) {
        if (func_02A1E8(0))
            func_08C320(D_0020E86C[1]);
        else if (D_0020E86C[1] > 0.0f)
            func_08C320(D_0020E86C[1]);
    }
    if (o->def->hash == 0x86E8A1BF || o->def->hash == 0xEE2180B6) {
        if (func_02A1E8(1))
            func_08C320(D_0020E86C[2]);
        else if (D_0020E86C[2] > 0.0f)
            func_08C320(D_0020E86C[2]);
    }
    if (o->def->hash == 0x36919224) {
        if (func_02A1E8(2))
            func_08C320(D_0020E86C[3]);
        else if (D_0020E86C[3] > 0.0f)
            func_08C320(D_0020E86C[3]);
    }
}
