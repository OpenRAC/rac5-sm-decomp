/* LEVEL_09:0x0CB4A8 -- initialises the level's global record: two floats and
   three words, guarded by "a1 == 0xFFFF" and "a0 != 0".
   The record's last float lives in its own symbol (D_313890). */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_313880;
extern float D_313890;
extern float D_1ECA94;

void func_0CB4A8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_313880.d = 1.0f;
        D_313880.a = 0;
        D_313890 = D_1ECA94;
        D_313880.c = 0;
        D_313880.b = 0;
    }
}
