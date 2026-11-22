/* LEVEL_09:0x066570 -- placement copy of LEVEL_01_069970.c: depending on the object's mode word, starts the open sequence (mode 1 with the timer expired) or, in mode 2, calls a helper unless the state is 9. */
typedef struct {
    char pad000[0x9A0];
    int state9A0;
    char pad9A4[0xE7C - 0x9A4];
    int modeE7C;
    char padE80[0xEFC - 0xE80];
    float fEFC;
    char padF00[0xF10 - 0xF00];
    long long bitsF10;
    char padF18[0xF44 - 0xF18];
    float fF44;
    float fF48;
    char padF4C[4];
    float fF50;
    char padF54[8];
    float fF5C;
    float fF60;
} Obj;

extern void func_049F80(Obj *o, int a, float b);
extern void func_084C90(int a);

void func_066570(Obj *o)
{
    if (o->modeE7C != 2) {
        if (o->modeE7C < 3) {
            if (o->modeE7C == 1) {
                if (o->fF44 <= 0.0f) {
                    o->modeE7C = 2;
                    o->bitsF10 |= 2;
                    o->fF48 = -0.16666667f;
                    o->fEFC = -0.5f;
                    o->fF44 = 1.0f;
                    o->fF50 = 1.0f;
                    o->fF5C = 1.0f;
                    o->fF60 = 0.8f;
                    func_049F80(o, 0, 0.0f);
                }
            }
        }
    } else {
        if (o->state9A0 != 9) {
            func_084C90(0);
        }
    }
}
