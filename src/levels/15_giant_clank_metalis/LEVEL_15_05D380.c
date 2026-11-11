typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_181E78;

void func_181E78(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_181E78.a = 0;
            D_181E78.d = 1.0f;
            D_181E78.c = 0;
            D_181E78.b = 0;
        }
    }
}
