/* LEVEL_08:0x236C28 -- placement copy of LEVEL_01_1EE0A0.c: initializes a three-word record with two values and a fixed table pointer, and returns it. */
typedef struct {
    int w0;
    void *table;
    int w8;
} Rec;

extern char D_0027A6C8[];

Rec *__14__si_type_infoPCcRC16__user_type_info(Rec *r, int a, int b)
{
    r->w0 = a;
    r->table = D_0027A6C8;
    r->w8 = b;
    return r;
}
