/* USA LEVEL_03.REL:0x18EE88, 120-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 116 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct Obj {char p[0x40];unsigned int kind;char q[0x20];unsigned int flags;} Obj;
typedef union Ref {unsigned int offset;Obj *object;} Ref;
extern char *D_21F414;
static __inline__ int Resolve(Ref *r)
{
 if(r->offset){
  Obj *p=(Obj *)(D_21F414+r->offset);
  if(p->kind && (p->flags&1)){r->object=p;return 1;}
  r->object=0;return 0;
 }
 return 0;
}
int func_18EE88(Ref *r)
{
 if(Resolve(r)){r->object->flags|=0x20;r->object->flags|=8;return 1;}
 return 0;
}
