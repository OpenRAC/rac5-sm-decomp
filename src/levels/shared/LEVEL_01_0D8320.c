/* LEVEL_01:0x0D8320 -- stores an int field and a float field of a record. */
typedef struct {
    char pad[0x18];
    int f18;
    int f1C;
    float f20;
} Rec;

void func_0D8320(Rec *p, int v)
{
    p->f18 = v;
    p->f20 = (float)(v + 0x20);
}
