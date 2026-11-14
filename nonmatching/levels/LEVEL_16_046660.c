/* USA LEVEL_16.REL:0x046660, 196-byte candidate (14 November 2026).
 * Measured pinned: 20 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Glob { char pad00[0x24]; int w24; } Glob;
typedef struct Sub { char pad00[0x14]; unsigned int w14; } Sub;
typedef struct Obj { char pad00[0xC0]; Sub s; char padD8[0x60]; float f138; float f13C; char pad140[0x28]; int w168; } Obj;
extern Glob *D_001A1AB4;
void func_046660(Obj *o)
{
    Sub *s;
    float t;
    float h;
    if (o->w168 == 1) {
        int ok;
        s = &o->s;
        if (D_001A1AB4->w24 == 2) ok = (s->w14 & 0x4100) != 0;
        else ok = (s->w14 & 0x4000) != 0;
        if (ok) {
            t = o->f13C - 1.0f;
            o->f13C = t;
            if (t > 0.0f) return;
            h = o->f138 + 0.008f;
            o->f138 = h;
            if (h > 0.028000008f) o->f138 = 0.028000008f;
        } else {
            o->f13C = 10000.0f;
        }
    }
}
