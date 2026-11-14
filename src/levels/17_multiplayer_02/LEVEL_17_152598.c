/* LEVEL_17:0x152598 -- placement copy of LEVEL_16_15A1B0.c: looks up the registered record, keeps it in the global slot and, when present, sets its two scale fields to 8 and 45. */
typedef struct Rec {
    char pad_00[0x18];
    float scale_a;
    float scale_b;
} Rec;

typedef struct Holder {
    Rec *rec;
} Holder;

extern Holder D_001B11EC;
extern int func_106410(unsigned int value);

void func_152598(void)
{
    D_001B11EC.rec = (Rec *)func_106410(0xA76B39EAu);
    if (D_001B11EC.rec != 0) {
        D_001B11EC.rec->scale_a = 8.0f;
        D_001B11EC.rec->scale_b = 45.0f;
    }
}
