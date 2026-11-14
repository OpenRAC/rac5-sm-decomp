/* LEVEL_17:0x18D0F8 -- placement copy of LEVEL_01_1EE010.c: fills a four-word record (value, fixed table pointer, two more values) and returns it. */
typedef struct Rec {
    int w0;
    void *table;
    int w8;
    int wC;
} Rec;

extern char D_001CB430[];

Rec *__17__class_type_infoPCcPCQ217__class_type_info9base_infoUi(Rec *r, int a, int b, int c)
{
    r->w0 = a;
    r->table = D_001CB430;
    r->w8 = b;
    r->wC = c;
    return r;
}
