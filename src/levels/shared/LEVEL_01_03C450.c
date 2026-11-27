/* LEVEL_01:0x03C450 -- clears several state bits of a record, latching one of them into its second flag word, and resets two fields. */
typedef struct {
    unsigned long long low : 37;
    unsigned long long b37 : 1;
    unsigned long long b38 : 1;
    unsigned long long b39 : 1;
    unsigned long long b40 : 1;
    unsigned long long b41 : 3;
    unsigned long long b44 : 1;
    unsigned long long high : 19;
} Flags0;
typedef struct {
    unsigned long long b0 : 1;
    unsigned long long rest : 63;
} Flags1;
typedef struct {
    char pad_000[0x274];
    int w274;
    char pad_278[0x960 - 0x278];
    Flags0 f960;
    Flags1 f968;
    char pad_970[0x9E8 - 0x970];
    char b9E8;
} Rec;

void func_03C450(Rec *r)
{
    r->f960.b37 = 0;
    r->f960.b39 = 0;
    r->f960.b38 = 0;
    r->f968.b0 = r->f960.b40;
    r->f960.b40 = 0;
    r->f960.b44 = 0;
    r->w274 = 0;
    r->b9E8 = 0;
}
