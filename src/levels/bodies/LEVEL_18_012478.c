/* LEVEL_18:0x012478 -- placement copy of LEVEL_16_012408.c: initialises the level's global record: two floats and
   three words, guarded by "a1 == 0xFFFF" and "a0 != 0".
   The record's last float lives in its own symbol (D_1DE5E8). */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_1DE5D8;
extern float D_1DE5E8;

void func_012478(Rec *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_1DE5D8.d = 1.0f;
        D_1DE5E8 = 1.0f / 30.0f;
        D_1DE5D8.a = 0;
        D_1DE5D8.c = 0;
        D_1DE5D8.b = 0;
    }
}
