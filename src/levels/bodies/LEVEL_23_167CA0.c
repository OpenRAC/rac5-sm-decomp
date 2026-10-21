/* LEVEL_23:0x167CA0 -- resets a byte field and calls func_073F58. */
typedef struct {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x2];
    void *p_48;
} Rec;

extern void func_073F58(Rec *a0, int a1, float a2);

void func_167CA0(Rec *a0)
{
    Rec *s = a0;

    if (s->b_45 == 0 || s->b_45 == 3) {
        s->b_45 = 1;
        func_073F58(s, 2, 0.0f);
        *(float *)((char *)s->p_48 + 8) = 2.0f;
    }
}
