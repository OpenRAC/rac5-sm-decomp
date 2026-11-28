/* USA LEVEL_02.REL:0x1156C8, 200-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 220 compiled bytes, 53 differing words; first difference +0x0.
 * The main cursor advances one byte; separator lookahead is separate.
 * Reopen: Recover scan/hash lifetimes and loop layout while preserving both cursors.
 * No matching credit.
 */
extern unsigned int D_0022C0C0[];

unsigned int func_1156C8(unsigned char *param_1)
{
  unsigned char other;
  unsigned int v;
  unsigned char c;
  unsigned char *scan;
  unsigned int hash;
  if (param_1 == 0)
  {
    return 0;
  }
  c = *param_1;
  hash = 0xFFFFFFFF;
  if (c != 0)
  {
    do
    {
      if ((c == 0x2F) || ((other = *param_1, c == 0x5C)))
      {
        other = *param_1;
        scan = param_1 + 1;
        do
        {
          c = *scan;
          for (;;)
          {
            scan++;
            if (c == 0x2F)
            {
              break;
            }
            if (c != 0x5C)
            {
              goto hash_byte;
            }
            c = *scan;
          }

        }
        while (1);
      }
      hash_byte:
      if (other == 0x2F)
      {
        v = (hash & 0xFF) ^ 0x5C;
      }
      else
      {
        v = ((unsigned int) (*param_1)) ^ (hash & 0xFF);
      }

      hash = (hash >> 8) ^ D_0022C0C0[v];
      c = param_1[1];
      param_1++;
    }
    while (c != 0);
  }
  return ~hash;
}
