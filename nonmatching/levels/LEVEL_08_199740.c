/* USA LEVEL_08.REL:0x199740, 140-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 140 compiled bytes, 14 differing words; first difference +0x14.
 * The 44-byte prefix and all six following argument positions are preserved.
 * Reopen: Recover record/parent lifetimes without moving the +0x2C word to the final slot.
 * No matching credit.
 */
typedef struct Mob1C07C0 Mob1C07C0;

typedef struct {
    int w[11];
} Copy2C;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
} Parent;

typedef struct {
    Copy2C config;
    Parent *parent;
    int w30;
    int w34;
    int w38;
    Mob1C07C0 *replacement_parent;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Rec *rec;
} Obj;

extern void func_199AB0(Obj *o, int state, int mode);
extern void func_0845F8(Obj *o, int a);
extern void func_1C07C0(Mob1C07C0 *o, Copy2C *cfg, int a2, int a3, int a4, int a5, Mob1C07C0 *parent);

void func_199740(Obj *o)
{
  Rec *r;
  if ((o->b45 - 0xBU) < 2U)
  {
    return;
  }
  r = o->rec;
  if ((r->parent->b45 ^ 2) != 0)
  {
    func_199AB0(o, o->b45, 10);
    return;
  }
  func_0845F8(o, 0);
  func_1C07C0((Mob1C07C0 *) o, &r->config, (int) r->parent, r->w30, r->w34, r->w38, r->replacement_parent);
}
