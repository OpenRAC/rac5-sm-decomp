/* USA LEVEL_04.REL:0x1DDCF8, 128-byte nonmatching body.
 * Measured 27 November 2026 with pinned/gnu-ee-trial (-O2 -G0):
 * 128 compiled bytes, 3 differing words; first difference +0x5C.
 * The event contract and the two-pointer indirect method call are preserved.
 * Reopen: Recover indirect-call lifetimes without inventing a callback return contract.
 * No matching credit.
 */
typedef struct Obj Obj;
extern void func_080188(Obj *,unsigned int,float,int,int,float);
extern void func_033B20(char *);
extern void func_033E88(char *,int);
typedef struct V {char p[20];int (*call)(char *,void *);} V;
typedef struct Sub {V *v;} Sub;
void func_1DDCF8(char *o)
{
  char *d = *((char **) (o + 0x58));
  char *child;
  Sub *sub;
  d[0x10c] = 4;
  func_080188((Obj *) o, 4, 0.15f, 0, 1, 0.0f);
  func_033B20(o);
  func_033E88(o, 2);
  child = *((char **) d);
  sub = *((Sub **) (child + 0x58));
  sub->v->call(child, sub);
}
