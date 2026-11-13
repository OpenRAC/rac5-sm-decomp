/* USA LEVEL_22.REL:0x10F8A0, 112-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 112 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct {char p[0x14];unsigned short count;} List;
int func_10F8A0(unsigned int *out,unsigned int index,List *list,int forward,int wrap)
{
 if(list && out){
 if(forward){
  if(index==list->count-1){if(!wrap)return 0;*out=0;}
  else *out=index+1;
  return 1;
 }
 if(!index){if(!wrap)return 0;*out=list->count-1;}
 else *out=index-1;
 return 1;
 }
 return 0;
}
