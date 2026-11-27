typedef struct {
    char pad[0x70];
    float f70;
} S;

void func_06FF78(S *s);

void func_1722D8(S *s)
{
    if (s->f70 > 2.5f) {
        ((void (*)(S *s, int v))func_06FF78)(s, 1);
    }
}
