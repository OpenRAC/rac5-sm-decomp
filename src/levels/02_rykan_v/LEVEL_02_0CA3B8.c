/* LEVEL_02:0x0CA3B8 -- forwards the observed flag and field values to local helpers. */
struct Obj;
struct vec;

extern unsigned int func_08E950(int id);
extern int func_0BC930(int value);
extern int func_0C3430(void);
extern void func_01B188(int a, int b);
extern int func_0BFFB8(struct Obj *p, int arg);
extern int func_0C0D18(struct vec *p);
extern int func_13A420(unsigned int index, unsigned int value);
extern char D_003406B0[];

void func_0CA3B8(void)
{
  unsigned int f = func_08E950(0x6B10);
  char *obj;
  if (f & 8)
  {
    func_0BC930(7);
    func_0BC930(0);
    func_01B188(4, 0);
  }
  else
    if (f & 0x1000)
  {
    func_0BC930(7);
    func_0BC930(0);
    if (func_0C3430() == 0)
    {
      func_01B188(4, 0);
    }
  }
  else
  {
    func_0BFFB8((struct Obj *) D_003406B0, (int) f);
  }
  obj = (char *) func_0C0D18((struct vec *) D_003406B0);
  if (obj != 0)
  {
    f = *((unsigned int *) (obj + 0xD4));
    if (f != 0)
    {
      func_13A420(0, f);
    }
  }
}
