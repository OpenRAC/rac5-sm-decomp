/* LEVEL_16:0x15A1B0 -- looks up the registered record, keeps it in the global slot and, when present, sets its two scale fields to 8 and 45. */
typedef struct Rec {
    char pad_00[0x18];
    float scale_a;
    float scale_b;
} Rec;

typedef struct Holder {
    Rec *rec;
} Holder;

extern Holder D_001BDC4C;
extern int func_106E98(unsigned int value);

void func_15A1B0(void)
{
    D_001BDC4C.rec = (Rec *)func_106E98(0xA76B39EAu);
    if (D_001BDC4C.rec != 0) {
        D_001BDC4C.rec->scale_a = 8.0f;
        D_001BDC4C.rec->scale_b = 45.0f;
    }
}
