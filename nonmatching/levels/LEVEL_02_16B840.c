/* USA LEVEL_02.REL:0x16B840, 176-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 176 linked bytes; first differing word +0x10.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct {char pad[0x29];unsigned char count;} Control;
typedef struct {char pad[0x54];Control *control;char *data;} Parent;
typedef struct {char pad[0x14];Parent *parent;char gap[0x43];unsigned char position;} State;
typedef struct {char pad[0x54];State *state;} Obj;
void func_16B840(Obj *o,unsigned char previous,unsigned char current) {
 State *s=o->state;Parent *p=s->parent;unsigned int count=p->control->count;
 unsigned char *table=(unsigned char *)p->data+0x6A8;
 unsigned char i;
 if(previous==current) return;
 if(previous<current) {
  i=s->position+1;
  while(i<count && table[i]<=current) {s->position=i;i++;}
 } else {
  i=s->position;
  while(i && table[i]>current) {i--;s->position=i;}
 }
}
