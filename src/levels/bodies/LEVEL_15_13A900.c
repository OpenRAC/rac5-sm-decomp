extern void *D_0015E204;
extern void close_it(int a, float x, float y) __asm__("func_000000");
extern void *open_it(int a, int b, int c, float w) __asm__("func_000000");
extern void func_021A78(float f);

void func_13A900(void *a0)
{
    void *g = D_0015E204;

    if (g != 0 && a0 != g) {
        void *p = *(void **)((char *)g + 0x58);

        if (*(int *)p != 0) {
            close_it(*(int *)p, 5.0f, 0.0f);
            *(int *)p = 0;
        }
    }

    D_0015E204 = a0;
    if (a0 != 0) {
        void *q;
        void *v;

        q = *(void **)((char *)a0 + 0x58);
        v = open_it(0, *(int *)((char *)q + 4), 0, 1.0f);
        *(void **)q = v;
        if (v != 0)
            func_021A78(*(float *)((char *)v + 0x68));
        *(char *)((char *)q + 0x0D) = 0;
    }
}
