/* USA LEVEL_08.REL:0x21D758, 196-byte candidate.
 * Representative measured with gnu-ee-trial-divpad/gnu-ee-trial: 196 linked bytes; first differing word +0x7C.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct {float threshold,scale;} Entry;
extern char *D_0023CB2C;
int func_21D758(Entry *table,unsigned int count,int amount,float scale) {
 float factor=(float)amount*scale/25.0f;
 float time=(float)*(unsigned int *)(D_0023CB2C+0x1372C)/25.0f;
 Entry *p=table,*end=table+(count-1);
 while(p!=end) {if(p->threshold<=time)break;p++;}
 return (int)(p->scale*factor);
}
