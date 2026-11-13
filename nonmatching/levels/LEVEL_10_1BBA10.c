/* USA LEVEL_10.REL:0x1BBA10, 200-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 196 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct {char pad[0x18];float duration;} Setting;
typedef struct {char pad[0x40];Setting *setting;} State;
typedef struct {char pad[0x58];State *state;char gap[0x14];float time;} Obj;
typedef struct {char pad[0x24];unsigned int tag;char gap[0x1C];} Entry;
typedef struct {char pad[0x34];Entry *entries;unsigned int count;} Global;
extern Global *D_0020F9F0;
extern Setting D_00230FC0;
extern Obj *func_07CB88(Entry *,unsigned int,void *,unsigned char);
Obj *func_1BBA10(void *arg,Setting *setting) {
 Entry *p=D_0020F9F0->entries,*found=0;unsigned int i;
 for(i=0;i<D_0020F9F0->count;i++,p++) if(p->tag==0x8ED73B6E) {found=p;break;}
 if(found) {
  Obj *o=func_07CB88(found,0x8ED73B6E,arg,255);
  if(o) {if(!setting)setting=&D_00230FC0;o->state->setting=setting;o->time=setting->duration;}
  return o;
 }
 return 0;
}
