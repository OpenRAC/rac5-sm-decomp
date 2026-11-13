/* USA LEVEL_10.REL:0x1A5718, 180-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 148 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct {char p[0x24];unsigned int id;char tail[0x1c];} Entry;
typedef struct {char p[0x34];Entry *entries;unsigned int count;} Registry;
extern Registry *D_20F9F0;
static __inline__ Entry *find(Registry *r,unsigned int id)
{
 unsigned int count=r->count,i;Entry *p;
 if(count){p=r->entries;i=0;do {if(p->id==id)return p;i++;p++;}while(i<count);}
 return 0;
}

extern char *func_07CB88(Entry *,unsigned int,void *,unsigned int);
char *func_1A5718(void *arg,void *value)
{
 Entry *found=0;char *out=0;unsigned int i;
 found=find(D_20F9F0,0xefc76a3cu);
 if(found)out=func_07CB88(found,0xefc76a3cu,arg,255);
 if(out)**(void ***)(out+0x58)=value;
 return out;
}
