/* USA LEVEL_08.REL:0x1CAB88, 136-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 136 compiled bytes, 4 differing words; first difference +0x38.
 * The sound call uses eight GP arguments, four floats and a Voice** slot.
 * Reopen: Recover sound-call register and scheduling order with these contracts intact.
 * No matching credit.
 */
typedef struct Voice Voice;

typedef struct Target {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Target;

typedef struct Rec {
    char pad00[0x10];
    Voice *f10;
} Rec;

typedef struct Obj {
    char pad00[0x58];
    Rec *rec;
} Obj;

extern Target *D_0025207C;

extern void func_088940(Obj *o, int sound, Voice **handle, int loop, int c4, int b1,
                        unsigned char prio, int b0, float f0, float f1, float f2, float f3);
extern void func_088AA8(char *record);
extern void func_21D048(Obj *o, int arg);

void func_1CAB88(Obj *o, int arg)
{
  Rec *rec = o->rec;
  Target *t;
  if (arg != 0)
  {
    t = D_0025207C;
    if (t != 0)
    {
      func_088940(o, (int) t, &rec->f10, 0, 0, 0, 0, 1, t->f14, t->f18, t->f1C, t->f20);
    }
  }
  else
  {
    func_088AA8((char *) rec->f10);
  }
  func_21D048(o, arg);
}
