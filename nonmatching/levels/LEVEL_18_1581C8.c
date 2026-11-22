/* USA LEVEL_18.REL:0x1581C8, 224-byte candidate (21 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x60.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0xFC];
    unsigned char idx_FC;
} Src;

typedef struct {
    char pad00[4];
    Src *src_04;
    char pad08[8];
    float val_10;
    float prev_14;
    int w18;
    int w1C;
    int w20;
    char pad24[0xC];
    char *p30;
    char pad34[0xC];
    unsigned char key_40;
    unsigned char slot_41;
    unsigned char b42;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state_45;
    char pad46[0x12];
    Rec *rec_58;
} Obj;

extern float D_001D5F50[];

extern void func_11CA18(char *p, float a, float b);

void func_1581C8(Obj *o)
{
    Rec *r;

    r = o->rec_58;
    r->prev_14 = r->val_10;
    if (r->key_40 == 0xFF) {
        if (r->src_04 != 0) {
            r->slot_41 = r->src_04->idx_FC;
            r->val_10 = D_001D5F50[r->slot_41];
        } else {
            r->slot_41 = 0;
            r->val_10 = D_001D5F50[0];
        }
    } else {
        func_11CA18(r->p30, (float)r->key_40 * 1000.0f + 1.0f, 2.0f);
        r->slot_41 = 0xFF;
        r->val_10 = 0;
    }
    r->w1C = 0;
    r->w20 = 0;
    r->b42 = 0;
    o->state_45 = 1;
}
