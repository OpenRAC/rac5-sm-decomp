/* USA LEVEL_01.REL:0x0DBF48, 156-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 152 compiled bytes, 27 differing words; first difference +0x18.
 * The helper stores words and function addresses; callback signatures remain unclassified.
 * Reopen: Recover conditional-move ties while preserving the min-then-max clamp.
 * No matching credit.
 */
extern unsigned int D_00297DC0[];
extern void func_0DB810(void);
extern void func_0DB648(void);
extern void func_096948(unsigned int *record, unsigned int first, unsigned int second,
                        int third, int fourth, int fifth, unsigned int sixth);

void func_0DBF48(unsigned int *obj, int step, int index)
{
  int level;
  int shift;
  if (step == 4)
  {
    shift = 9;
  }
  else
  {
    level = 3;
    if (step <= 2)
    {
      level = step;
    }
    step = (!(level > (-1))) ? (0) : (level);
    shift = 0x13 - step;
  }
  func_096948(obj, ((((unsigned int) shift) << 27) | (D_00297DC0[index] << 16)) | 0x70C4, (unsigned int) func_0DB810, 0x6C, 0, -1, (unsigned int) func_0DB648);
}
