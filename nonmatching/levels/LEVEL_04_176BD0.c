/* USA LEVEL_04.REL:0x176BD0, 192-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 192 compiled bytes, 5 differing words; first difference +0x70.
 * The event call follows the accepted mixed float/integer contract, including 0 then 1.
 * Reopen: Recover call preparation order while preserving the accepted argument positions.
 * No matching credit.
 */
extern int func_034278(char *,void *);
extern int func_033D10(char *);
extern void func_176918(char *,int);
typedef struct Obj Obj;
extern void func_080188(Obj *,unsigned int,float,int,int,float);
extern void func_033E88(char *,int);
extern float D_00244298;
void func_176BD0(char *o, void *arg)
{
  unsigned char *s = *((unsigned char **) (o + 0x58));
  int n;
  if (s[0x164])
  {
    if (!func_034278(o, arg))
    {
      func_176918(o, 0);
    }
  }
  else
  {
    n = func_033D10(o);
    if (n == 0)
    {
      func_176918(o, 0);
    }
    else
      if (n == 1)
    {
      float time = D_00244298;
      s[0x10C] = 2;
      func_080188((Obj *) o, 2, time, 0, 1, 0.0f);
      func_033E88(o, 1);
      s[0x164] = n;
    }
  }
}
