/* USA LEVEL_04.REL:0x032800, 144-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 120 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct {char p[0x24];unsigned int id;char tail[0x1c];} Entry;
typedef struct {char p[0x34];Entry *entries;unsigned int count;} Registry;
extern Registry *D_2201B0;
static __inline__ Entry *find(Registry *r,unsigned int id)
{
 unsigned int count=r->count,i;Entry *p;
 if(count){p=r->entries;i=0;do {if(p->id==id)return p;i++;p++;}while(i<count);}
 return 0;
}

extern void *func_07F9D0(Entry *,unsigned int,void *,unsigned int);
void *func_032800(void *arg)
{
 Entry *found=0;unsigned int i;
 found=find(D_2201B0,0x370b4473u);
 if(found)return func_07F9D0(found,0x370b4473u,arg,255);
 return 0;
}
