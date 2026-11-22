/* USA LEVEL_16.REL:0x140140, 328-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 22 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj {
    unsigned char pad0[0xF4];
    int f_F4;
};

typedef struct {
    struct Obj *owner;
    char pad04[4];
    float f08;
    float f0C;
    char pad10[0x2C];
    int w3C;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Holder;

typedef struct {
    char pad00[0x24];
    int w24;
} Mode;

typedef struct {
    int w0;
    int pad[3];
} Row;

extern Mode *D_001A1AB4;
extern char D_001D33D8[];
extern char D_001D33F0[];
extern Row D_001BD7A8[];
extern void func_0A2180(int a, char *table, int b, unsigned int c);
extern int func_05D640(char *object);
extern void func_037D78(struct Obj *o);
extern void func_0A4BD8(int a, int b, int c);

void func_140140(Holder *h, struct Obj **p)
{
    Rec *rec;
    float a;
    float b;

    rec = h->rec;
    if (rec->w3C == 0) {
        return;
    }
    if (rec->w3C & 1) {
        if (rec->owner == *p) {
            func_0A2180(rec->owner->f_F4 - 1, D_001D33D8, -0x89, 0xFFFFFFFFu);
        }
    }
    if (rec->w3C & 2) {
        if (rec->owner == *p) {
            if (func_05D640((char *)rec->owner) != 0) {
                func_037D78(*p);
                if ((D_001A1AB4->w24 ^ 2) != 0) {
                    func_0A2180((*p)->f_F4 - 1, D_001D33F0, -0x8A, 0xFFFFFFFFu);
                }
                a = rec->f0C;
                b = a - 0.1f;
                a = a - rec->f08;
                func_0A4BD8(rec->owner->f_F4 - 1, D_001BD7A8[(int)((a / b) * 3.0f)].w0, 3);
            }
        }
    }
}
