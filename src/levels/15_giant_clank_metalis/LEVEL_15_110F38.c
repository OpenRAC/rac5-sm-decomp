/* LEVEL_15:0x110F38 -- subtracts the float at +4 of the third record from the float at +0x24C of the record that precedes the first argument. */
typedef struct {
    char pad0[0x24C];
    float f24C;
} Rec;

typedef struct {
    char pad0[4];
    float f4;
} Src;

void func_110F38(char *a0, int a1, int a2, Src *s)
{
    Rec *r = (Rec *)(a0 - 0x258);

    r->f24C = r->f24C - s->f4;
}
