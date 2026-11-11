/* LEVEL_09:0x17FE70 -- looks up the registered record, keeps it in the global slot and, when present, sets its two scale fields to 80 and 40. */
typedef struct Rec {
    char pad_00[0x18];
    float scale_a;
    float scale_b;
} Rec;

typedef struct Holder {
    Rec *rec;
} Holder;

extern Holder D_001F24D0;
extern int func_123000(unsigned int value);

void func_17FE70(void)
{
    D_001F24D0.rec = (Rec *)func_123000(0x41E7A5F1u);
    if (D_001F24D0.rec != 0) {
        D_001F24D0.rec->scale_b = 80.0f;
        D_001F24D0.rec->scale_a = 40.0f;
    }
}
