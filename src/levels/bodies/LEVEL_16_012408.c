/* LEVEL_16:0x012408 -- initialises the level's global record: two floats and
   three words, guarded by "a1 == 0xFFFF" and "a0 != 0".
   The record's last float lives in its own symbol (D_1DE268). */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_1DE258;
extern float D_1DE268;

void func_012408(Rec *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_1DE258.d = 1.0f;
        D_1DE268 = 1.0f / 30.0f;
        D_1DE258.a = 0;
        D_1DE258.c = 0;
        D_1DE258.b = 0;
    }
}
