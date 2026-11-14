/* LEVEL_07:0x19EA20 -- registers the packed handle for the current mode and creates two objects from fixed keys, keeping them in globals and setting two of their floats to 100000. */
typedef struct {
    char pad00[0x18];
    float f18;
    float f1C;
} Obj;

extern int D_002AD778;
extern int D_003AC7A0;
extern Obj *D_0021D098[1];
extern Obj *D_0021D09C[1];

extern int func_103480(unsigned int id);
extern int func_12D068(unsigned int value);

void func_19EA20(void)
{
    D_003AC7A0 = func_103480((D_002AD778 << 16) | 0xA00030C1u);
    D_0021D098[0] = (Obj *)func_12D068(0xACE4C23Bu);
    if (D_0021D098[0] != 0) {
        D_0021D098[0]->f1C = 100000.0f;
        D_0021D098[0]->f18 = 100000.0f;
    }
    D_0021D09C[0] = (Obj *)func_12D068(0x0439DD69u);
    if (D_0021D09C[0] != 0) {
        D_0021D09C[0]->f1C = 100000.0f;
        D_0021D09C[0]->f18 = 100000.0f;
    }
}
