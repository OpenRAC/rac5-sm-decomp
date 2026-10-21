typedef struct {
    int a;
    int b;
    int c;
    float d;
} G;

extern G D_269030;

void func_269030(int *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_269030.a = 0;
            D_269030.d = 1.0f;
            D_269030.c = 0;
            D_269030.b = 0;
        }
    }
}
