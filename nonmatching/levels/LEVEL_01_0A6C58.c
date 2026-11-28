/* USA LEVEL_01.REL:0x0A6C58, 144-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 144 compiled bytes, 18 differing words; first difference +0x28.
 * The helper takes an unsigned slot; a null entry still returns the table base.
 * Reopen: Recover the branch exit layout without changing the null-entry result.
 * No matching credit.
 */
typedef unsigned int u32;
extern int func_0A69A0(unsigned int);
extern char D_001F7060[];

u32 func_0A6C58(int index, int slot, int channel)
{
  char *entry;
  u32 r;
  if (!func_0A69A0(slot))
  {
    r = 0;
  }
  else
    if ((entry = *((char **) (D_001F7060 + ((slot * 12) + (channel * 4))))) == 0)
  {
    r = (u32) D_001F7060;
  }
  else
    if (index >= 3)
  {
    r = 0;
  }
  else
    if (index < 0)
  {
    r = 0;
  }
  else
  {
    r = (*((u32 *) (entry + 4))) + index;
  }
  return r;
}