/* LEVEL_05:0x10BC68 -- placement copy of LEVEL_01_10F828.c: when the value matches the record's reference word, moves the record's position word to it and shifts the accumulated total by the difference. */
typedef struct {
    char pad0[8];
    int pos;
    int ref;
    int total;
} Rec;

extern Rec D_0031D5F8;

void MEM_free__FPvPcUi(void *p, int a, int b)
{
    Rec *r = &D_0031D5F8;
    int value = (int)p;

    (void)a;
    (void)b;
    if (value == r->ref) {
        int delta = r->pos - value;

        r->pos = value;
        r->total += delta;
    }
}
