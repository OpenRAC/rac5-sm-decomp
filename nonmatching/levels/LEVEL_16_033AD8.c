/* USA LEVEL_16.REL:0x033AD8, 140-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 132 linked bytes; first differing word +0x18.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct {char p[0x24];unsigned int id;char tail[0x1c];} Entry;
typedef struct {char p[0x34];Entry *entries;unsigned int count;} Registry;
extern Registry *D_1B48A0;
static __inline__ Entry *find(Registry *r,unsigned int id)
{
 unsigned int count=r->count,i;Entry *p;
 if(count){p=r->entries;i=0;do {if(p->id==id)return p;i++;p++;}while(i<count);}
 return 0;
}

extern unsigned char D_1A211F;
extern void func_112438(void *),func_050790(void *);
void func_033AD8(void *arg)
{
 Entry *found=0;unsigned char *flag=&D_1A211F;
 found=find(D_1B48A0,0x36919224u);
 *flag=found!=0;
 func_112438(arg);func_050790(arg);
}
