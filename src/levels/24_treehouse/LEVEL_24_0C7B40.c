/* LEVEL_24:0x0C7B40 -- initialise the global record on the "reset" call
   (a1 == 0xFFFF) when the object pointer is not null. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_2F7FC0;
extern float D_2F7FD0;
extern float D_1D3914;

void func_0C7B40(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2F7FC0.d = 1.0f;
            D_2F7FC0.a = 0;
            D_2F7FD0 = D_1D3914;
            D_2F7FC0.c = 0;
            D_2F7FC0.b = 0;
        }
    }
}
