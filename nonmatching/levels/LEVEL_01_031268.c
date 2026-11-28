/* USA LEVEL_01.REL:0x031268, 180-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 188 compiled bytes, 34 differing words; first difference +0x24.
 * Flags are unsigned long (64 bits); the callee receives the reviewed Motion view.
 * Reopen: Recover argument/path-tail lifetimes without narrowing the flags.
 * No matching credit.
 */
typedef struct {
    unsigned char b0, b1, b2, b3;
} Bytes_t;

typedef struct {
    char pad00[0x1C];
    float f1C;
    int f20;
    int f24;
} Motion;

typedef struct Path {
    char pad_00[4];
    float *points;
    char pad_08[0xC];
    unsigned short count;
} Path;

extern int func_02FFC0(Motion *out, void *actor, float *other, Bytes_t col, unsigned long flags);

int func_031268(float *out, void *a, float *b, Path *path, unsigned char *index, Bytes_t col, unsigned long flags)
{
  float *pt;
  Bytes_t c;
  c = col;
  if (!(func_02FFC0((Motion *) out, a, b, c, flags | 3UL) == 0))
  {
    return 0;
  }
  {
    *index = (*index) + 1;
    if ((*index) < path->count)
    {
      pt = path->points + ((*index) * 4);
      out[0] = pt[0];
      out[1] = pt[2];
      return 0;
    }
    return 1;
  }
}
